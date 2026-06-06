//
// Created by Elena Petkovska on 14.8.25.
//

#include <iostream>
using namespace std;

class NBAPlayer {
protected:
	char *ime;
	char tim[40];
	double poeni, asistencii, skokovi;

public:
	NBAPlayer() {
		ime = new char[0];
	}

	NBAPlayer(char *ime, char *tim, double poeni, double asistencii, double skokovi) {
		this->ime = new char[strlen(ime) + 1];
		strcpy(this->ime, ime);
		strcpy(this->tim, tim);
		this->poeni = poeni;
		this->asistencii = asistencii;
		this->skokovi = skokovi;
	}

	NBAPlayer(const NBAPlayer &nPlayer) {
		ime = new char[strlen(ime) + 1];
		strcpy(ime, nPlayer.ime);
		strcpy(tim, nPlayer.tim);
		poeni = nPlayer.poeni;
		asistencii = nPlayer.asistencii;
		skokovi = nPlayer.skokovi;
	}

	NBAPlayer &operator=(const NBAPlayer &nPlayer) {
		if (this != &nPlayer) {
			delete[] ime;

			ime = new char[strlen(ime) + 1];
			strcpy(ime, nPlayer.ime);
			strcpy(tim, nPlayer.tim);
			poeni = nPlayer.poeni;
			asistencii = nPlayer.asistencii;
			skokovi = nPlayer.skokovi;
		}

		return *this;
	}

	~NBAPlayer() {
		delete[] ime;
	}

	// Gi pravime virtual za da imame pravilen polimorfizam
	// Bez virtual, c++ povikuva metod spored tipot na pointer-ot, so virtual, c++ povikuva metod spored realniot objekt
	// Morame da go koristime vo base case, vo roditelskata klasa, sekogas tuka, ne vo izvedenata klasa
	virtual double rating() {
		return (0.45 * poeni) + (0.30 * asistencii) + (0.25 * skokovi);
	}

	virtual void print() {
		cout << ime << " - " << tim << endl;
		cout << "Points: " << poeni << endl;
		cout << "Assists: " << asistencii << endl;
		cout << "Rebounds: " << skokovi << endl;
		cout << "Rating: " << rating() << endl;
	}
};


// IZVEDENA KLASA - Klata AllStarPlayer ja izveduvame od vekje kreiranata klasa NBAPlayer
class AllStarPlayer : public NBAPlayer {
private:
	double poeniAS;
	double asistenciiAS;
	double skokoviAS;

public:
	AllStarPlayer() : NBAPlayer() {}

	AllStarPlayer(const NBAPlayer &nbaPlayer, double poeniAS, double asistenciiAS, double sokokoviAS) : NBAPlayer(nbaPlayer) {
		this->poeniAS = poeniAS;
		this->asistenciiAS = asistenciiAS;
		this->skokovi = skokoviAS;
	}

	AllStarPlayer(char *ime, char *tim, double poeni, double asistencii, double skokovi, double poeniAS, double asistenciiAS, double skokoviAS) : NBAPlayer(ime, tim, poeni, asistencii, skokovi) {
		this->poeniAS = poeniAS;
		this->asistenciiAS = asistenciiAS;
		this->skokoviAS = skokoviAS;
	}

	AllStarPlayer(const AllStarPlayer &asp) : NBAPlayer(asp){
		poeniAS = asp.asistenciiAS;
		asistenciiAS = asp.asistenciiAS;
		skokoviAS = asp.skokoviAS;
	}

	AllStarPlayer &operator=(const AllStarPlayer &asp) {
		if (this != &asp) {
			delete[] ime;

			ime = new char[strlen(ime) + 1];
			strcpy(ime, asp.ime);
			strcpy(tim, asp.tim);
			poeni = asp.poeni;
			asistencii = asp.asistencii;
			skokovi = asp.skokovi;
		}

		return *this;
	}

	~AllStarPlayer() {}

	double allStarRating() {
		return (0.30 * poeniAS) + (0.40 * asistenciiAS) + (0.30 * skokoviAS);
	}

	double rating() {
		return (NBAPlayer::rating() + allStarRating()) / 2;
	}

	void print() {
		NBAPlayer::print();
		cout << "All Star Rating: " << allStarRating() << endl;
		cout << "New Rating: " << rating() << endl;
	}
};

int main() {
	char name[50];
	char team[40];
	double points, assists, rebounds, allStarPoints, allStarAssists, allStarRebounds;

	NBAPlayer *players = new NBAPlayer[5];
	AllStarPlayer *asPlayers = new AllStarPlayer[5];
	int n;
	cin >> n;

	if (n == 1) {

		cout << "NBA PLAYERS:" << endl;
		cout << "=====================================" << endl;
		for (int i = 0; i < 5; ++i) {
			cin >> name >> team >> points >> assists >> rebounds;
			players[i] = NBAPlayer(name, team, points, assists, rebounds);
			players[i].print();
		}
	} else if (n == 2) {
		for (int i = 0; i < 5; ++i) {
			cin >> name >> team >> points >> assists >> rebounds;
			cin >> allStarPoints >> allStarAssists >> allStarRebounds;
			players[i] = NBAPlayer(name, team, points, assists, rebounds);
			asPlayers[i] = AllStarPlayer(players[i], allStarPoints, allStarAssists, allStarRebounds);
		}

		cout << "NBA PLAYERS:" << endl;
		cout << "=====================================" << endl;
		for (int i = 0; i < 5; ++i)
			players[i].print();

		cout << "ALL STAR PLAYERS:" << endl;
		cout << "=====================================" << endl;
		for (int i = 0; i < 5; ++i)
			asPlayers[i].print();
	} else if (n == 3) {

		for (int i = 0; i < 5; ++i) {
			cin >> name >> team >> points >> assists >> rebounds;
			cin >> allStarPoints >> allStarAssists >> allStarRebounds;
			asPlayers[i] = AllStarPlayer(name, team, points, assists, rebounds,
							     allStarPoints, allStarAssists, allStarRebounds);
		}
		cout << "ALL STAR PLAYERS:" << endl;
		cout << "=====================================" << endl;
		for (int i = 0; i < 5; ++i)
			asPlayers[i].print();

	}

	delete[] players;
	delete[] asPlayers;

	return 0;
}