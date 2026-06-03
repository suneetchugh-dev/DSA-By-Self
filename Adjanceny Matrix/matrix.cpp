
#include <iostream>
using namespace std;
#define MAX_VERTICES 100

void displayGraph(int graph[MAX_VERTICES][MAX_VERTICES], int vertices) {
    cout << "Adjacency Matrix:" << endl;
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
}

void addEdge(int graph[MAX_VERTICES][MAX_VERTICES], int start, int end) {
    graph[start][end] = 1;
    graph[end][start] = 1; // For undirected graph
}

int main() {
    int vertices, edges;

    // Input the number of vertices
    cout << "Enter number of vertices: ";
    cin >> vertices;
    if (vertices <= 0 || vertices > MAX_VERTICES) {
        cout << "Invalid number of vertices. Exiting..." << endl;
        return 1;
    }

    int graph[MAX_VERTICES][MAX_VERTICES] = {0}; // Initialize adjacency matrix with zero

    // Input the number of edges
    cout << "Enter the number of edges: ";
    cin >> edges;
    if (edges < 0 || edges > vertices * (vertices - 1) / 2) {
        cout << "Invalid number of edges. Exiting..." << endl;
        return 1;
    }

    // Input edges and construct the adjacency matrix
    for (int i = 0; i < edges; i++) {
        int start, end;
        cout << "Enter edge " << i + 1 << " (start end): ";
        cin >> start >> end;
        if (start < 0 || start >= vertices || end < 0 || end >= vertices) {
            cout << "Invalid edge vertices. Please enter values between 0 and " << vertices - 1 << "." << endl;
            i--; // repeat this edge input
            continue;
        }
        addEdge(graph, start, end);
    }

    displayGraph(graph, vertices);
    return 0;
}

