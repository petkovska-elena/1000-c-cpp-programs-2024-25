// Created by Elena Petkovska on 5.4.2025.
//

/* Cpp Course University of California Santa Cruz */

#include <algorithm>
#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

const int INF = 1e9;

struct Edge {
    int u, v;
    double weight;
    Edge(int u, int v, double w) : u(u), v(v), weight(w) {}
    bool operator<(const Edge& other) const { return weight < other.weight; }
};

class UnionFind {
   private:
    vector<int> parent, rank;

   public:
    UnionFind(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        for (int i = 0; i < n; i++) parent[i] = i;
    }

    int find(int u) {
        if (u != parent[u]) parent[u] = find(parent[u]);
        return parent[u];
    }

    bool unite(int u, int v) {
        int pu = find(u), pv = find(v);
        if (pu == pv) return false;

        if (rank[pu] < rank[pv])
            parent[pu] = pv;
        else {
            parent[pv] = pu;
            if (rank[pu] == rank[pv]) rank[pu]++;
        }
        return true;
    }
};

class Graph {
   private:
    int vertices;
    vector<vector<double>> adjMatrix;
    vector<Edge> edges;

   public:
    // Constructor for file-based graph
    Graph(const string& filename) {
        ifstream infile(filename);
        if (!infile) {
            cerr << "Error opening file.\n";
            exit(1);
        }

        infile >> vertices;
        adjMatrix.resize(vertices, vector<double>(vertices, INF));

        int u, v;
        double w;
        while (infile >> u >> v >> w) {
            adjMatrix[u][v] = w;
            adjMatrix[v][u] = w;  // undirected
            edges.emplace_back(u, v, w);
        }
        infile.close();
    }

    // Constructor for random graph (reused from before)
    Graph(int v) : vertices(v) {
        adjMatrix.resize(v, vector<double>(v, INF));
        for (int i = 0; i < v; i++) adjMatrix[i][i] = 0.0;
    }

    void addEdge(int u, int v, double weight) {
        adjMatrix[u][v] = weight;
        adjMatrix[v][u] = weight;
        edges.emplace_back(u, v, weight);
    }

    // Kruskal's MST algorithm
    void kruskalMST() {
        UnionFind uf(vertices);
        vector<Edge> mst;
        double totalCost = 0.0;

        sort(edges.begin(), edges.end());

        for (const auto& edge : edges) {
            if (uf.unite(edge.u, edge.v)) {
                mst.push_back(edge);
                totalCost += edge.weight;
            }
        }

        cout << "Minimum Spanning Tree (Kruskal):\n";
        for (const auto& edge : mst)
            cout << edge.u << " - " << edge.v << " : " << edge.weight << '\n';

        cout << "Total MST cost = " << totalCost << "\n";
    }
};