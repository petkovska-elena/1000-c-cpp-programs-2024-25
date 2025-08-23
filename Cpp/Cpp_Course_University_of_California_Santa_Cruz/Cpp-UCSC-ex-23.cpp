// Created by Elena Petkovska on 5.4.2025.
//

/* Cpp Course University of California Santa Cruz */

#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

const int INF = 1e9;

class Graph {
   private:
    int vertices;
    vector<vector<double>> adjMatrix;

   public:
    // Constructor
    Graph(int v) : vertices(v) {
        adjMatrix.resize(v, vector<double>(v, INF));
        for (int i = 0; i < v; i++) {
            adjMatrix[i][i] = 0.0;
        }
    }

    // Adds an undirected edge with weight
    void addEdge(int u, int v, double weight) {
        if (u != v) {
            adjMatrix[u][v] = weight;
            adjMatrix[v][u] = weight;
        }
    }

    // Generate random undirected graph with density and weight range
    void generateRandomGraph(double density, double minDist, double maxDist) {
        srand((unsigned int)time(nullptr));
        for (int i = 0; i < vertices; ++i) {
            for (int j = i + 1; j < vertices; ++j) {
                double prob = static_cast<double>(rand()) / RAND_MAX;
                if (prob < density) {
                    double weight = minDist + static_cast<double>(rand()) /
                                                  RAND_MAX *
                                                  (maxDist - minDist);
                    addEdge(i, j, weight);
                }
            }
        }
    }

    // Dijkstra’s algorithm from a single source node
    vector<double> dijkstra(int src) {
        vector<double> dist(vertices, INF);
        dist[src] = 0.0;

        priority_queue<pair<double, int>, vector<pair<double, int>>, greater<>>
            pq;
        pq.push({0.0, src});

        while (!pq.empty()) {
            auto [currDist, u] = pq.top();
            pq.pop();

            for (int v = 0; v < vertices; ++v) {
                if (adjMatrix[u][v] != INF) {
                    double newDist = currDist + adjMatrix[u][v];
                    if (newDist < dist[v]) {
                        dist[v] = newDist;
                        pq.push({newDist, v});
                    }
                }
            }
        }

        return dist;
    }

    // Average shortest path from one source to all reachable nodes
    double averageShortestPath(int source) {
        vector<double> distances = dijkstra(source);
        double sum = 0.0;
        int reachable = 0;

        for (int i = 0; i < vertices; ++i) {
            if (i != source && distances[i] < INF) {
                sum += distances[i];
                reachable++;
            }
        }

        return reachable > 0 ? sum / reachable : 0.0;
    }
};

int main() {
    const int nodeCount = 50;
    const double minDistance = 1.0;
    const double maxDistance = 10.0;

    vector<double> densities = {0.2, 0.4};

    for (double density : densities) {
        Graph g(nodeCount);
        g.generateRandomGraph(density, minDistance, maxDistance);
        double avgPath = g.averageShortestPath(0);

        cout << fixed << setprecision(4);
        cout << "Graph with edge density " << density * 100 << "%:\n";
        cout << "Average shortest path from node 0: " << avgPath << "\n\n";
    }

    return 0;
}