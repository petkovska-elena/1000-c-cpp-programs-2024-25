// Created by Elena Petkovska on 5.4.2025.
//

/* C Course University of California Santa Cruz */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define DECK_SIZE 52
#define HAND_SIZE 7
#define NUM_HANDS 1000000

typedef enum { CLUBS, DIAMONDS, HEARTS, SPADES } Suit;

typedef struct {
    Suit suit;
    short value; // 2 to 14 (Ace)
} Card;

void initialize_deck(Card deck[]) {
    int index = 0;
    for (int s = 0; s < 4; s++) {
        for (int v = 2; v <= 14; v++) {
            deck[index].suit = (Suit)s;
            deck[index].value = v;
            index++;
        }
    }
}

void shuffle_deck(Card deck[]) {
    for (int i = DECK_SIZE - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        Card temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }
}

int evaluate_hand(Card hand[]) {
    int value_count[15] = {0};
    int suit_count[4] = {0};

    for (int i = 0; i < HAND_SIZE; i++) {
        value_count[hand[i].value]++;
        suit_count[hand[i].suit]++;
    }

    int pairs = 0, threes = 0, fours = 0;
    for (int i = 2; i <= 14; i++) {
        if (value_count[i] == 4) fours++;
        else if (value_count[i] == 3) threes++;
        else if (value_count[i] == 2) pairs++;
    }

    // Check for flush
    int is_flush = 0;
    for (int i = 0; i < 4; i++) {
        if (suit_count[i] >= 5) {
            is_flush = 1;
            break;
        }
    }

    // Check for straight
    int is_straight = 0, consec = 0;
    for (int i = 2; i <= 14; i++) {
        if (value_count[i]) {
            consec++;
            if (consec >= 5) {
                is_straight = 1;
                break;
            }
        } else {
            consec = 0;
        }
    }

    // Special case: Ace-low straight
    if (!is_straight && value_count[14] && value_count[2] && value_count[3] && value_count[4] && value_count[5])
        is_straight = 1;

    // Determine hand category
    if (is_straight && is_flush) return 1;              // Straight flush
    if (fours) return 2;                                // Four of a kind
    if (threes && pairs) return 3;                      // Full house
    if (is_flush) return 4;                             // Flush
    if (is_straight) return 5;                          // Straight
    if (threes) return 6;                               // Three of a kind
    if (pairs >= 2) return 7;                           // Two pair
    if (pairs == 1) return 8;                           // One pair
    return 9;                                           // Ace high or less
}

int main() {
    Card deck[DECK_SIZE];
    Card hand[HAND_SIZE];
    int counts[10] = {0};

    const char* labels[] = {
        "Straight flush", "Four of a kind", "Full house", "Flush", "Straight",
        "Three of a kind", "Two pair", "Pair", "Ace high or less"
    };

    srand(time(NULL));

    for (int i = 0; i < NUM_HANDS; i++) {
        initialize_deck(deck);
        shuffle_deck(deck);
        memcpy(hand, deck, sizeof(Card) * HAND_SIZE);
        int result = evaluate_hand(hand);
        counts[result]++;
    }

    printf("Results after %d hands:\n", NUM_HANDS);
    printf("-------------------------------------------\n");
    printf("%-20s | %-12s\n", "Hand", "Probability");
    printf("-------------------------------------------\n");

    const char* hand_types[] = {
        "Straight flush", "Four of a kind", "Full house", "Flush",
        "Straight", "Three of a kind", "Two pair", "One pair", "Ace high or less"
    };

    for (int i = 0; i < 9; i++) {
        printf("%-20s | %.8f\n", hand_types[i], (double)counts[i] / NUM_HANDS);
    }

    return 0;
}