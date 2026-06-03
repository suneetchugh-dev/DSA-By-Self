#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
};

// Function to add a node at the beginning
void addNode(Node*& head, int data) {
	Node* newNode = new Node;
	newNode->data = data;
	newNode->next = head;
	head = newNode;
}

int main() {
	int n, m;
	cout << "Enter number of vertices: ";
	cin >> n;
	cout << "Enter number of edges: ";
	cin >> m;

	Node** adj = new Node*[n + 1]; // 1-based indexing
	for (int i = 0; i <= n; ++i) adj[i] = nullptr;

	cout << "Enter edges (u v):" << endl;
	for (int i = 0; i < m; ++i) {
		int u, v;
		cin >> u >> v;
		addNode(adj[u], v);
		addNode(adj[v], u); // Comment this for directed graph
	}

	cout << "Adjacency List:" << endl;
	for (int i = 1; i <= n; ++i) {
		cout << i << ": ";
		Node* temp = adj[i];
		while (temp) {
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
	}

	// Free memory
	for (int i = 0; i <= n; ++i) {
		Node* temp = adj[i];
		while (temp) {
			Node* toDelete = temp;
			temp = temp->next;
			delete toDelete;
		}
	}
	delete[] adj;
	return 0;
}