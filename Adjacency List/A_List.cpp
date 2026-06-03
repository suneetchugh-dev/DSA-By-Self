//Using Vectors

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, m;
	cout << "Enter number of vertices: ";
	cin >> n;
	cout << "Enter number of edges: ";
	cin >> m;

	// Adjacency list representation
	vector<vector<int>> adj(n + 1); // 1-based indexing

	cout << "Enter edges (u v):" << endl;
	for (int i = 0; i < m; ++i) {
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u); // Comment this line for directed graph
	}

	cout << "Adjacency List:" << endl;
	for (int i = 1; i <= n; ++i) {
		cout << i << ": ";
		for (int v : adj[i]) {
			cout << v << " ";
		}
		cout << endl;
	}
	return 0;
}
