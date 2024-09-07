#include <iostream>
#include <list>
#include <unordered_map>

using namespace std;

// Define a class to represent the graph
class graph
{
public:
    // Adjacency list: maps a node (key) to a list of connected nodes (values)
    unordered_map<int, list<int>> adj;

    // Method to add an edge to the graph
    // 'u' and 'v' are the nodes (vertices) to be connected
    // 'direction' indicates whether the graph is directed (1) or undirected (0)
    void addEdge(int u, int v, bool direction)
    {
        // Add edge from u to v
        adj[u].push_back(v);
        // If the graph is undirected (direction == 0), also add edge from v to u
        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }

    // Method to print the adjacency list
    void printlist()
    {
        // Iterate through each node and its list of connected nodes
        for (auto i : adj)
        {
            // Print the current node
            cout << i.first << " --> ";
            // Print all nodes connected to the current node
            for (auto j : i.second)
            {
                cout << " " << j;
            }
            // Move to the next line after printing all connected nodes for the current node
            cout << endl;
        }
    }
};

int main()
{
    int n;
    cout << "Enter the number of nodes: " << endl;
    cin >> n; // Read the number of nodes

    int m;
    cout << "Enter the number of edges: " << endl;
    cin >> m; // Read the number of edges

    // Create an instance of the graph class
    graph g;

    // Read edges and add them to the graph
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;      // Read each edge (u, v)
        g.addEdge(u, v, 0); // Add the edge to the graph (undirected graph)
    }

    // Print the adjacency list of the graph
    g.printlist();

    return 0;
}
