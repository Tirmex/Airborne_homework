#include <iostream>
#include <vector>
 
using namespace std;
 
void add_edges(vector<vector<int>>& graph, const vector<int>& route) {
    for (int stop : route) {
        for (int other_stop : route) {
            if (stop != other_stop) {
                graph[stop - 1][other_stop - 1] = 1;
            }
        }
    }
}
 
void print_graph(const vector<vector<int>>& graph) {
    for (const auto& row : graph) {
        for (size_t i = 0; i < row.size(); ++i) {
            cout << row[i];
            if (i < row.size() - 1) cout << " ";
        }
        cout << endl;
    }
}
 
int main() {
    int n, m;
    cin >> n >> m;
 
    vector<vector<int>> adjacency_graph(n, vector<int>(n, 0));
    vector<vector<int>> transfer_graph(n, vector<int>(n, 0));
 
    for (int i = 0; i < m; ++i) {
        int k;
        cin >> k;
        vector<int> route(k);
        for (int& stop : route) {
            cin >> stop;
        }
 
        // Adding edges to the adjacency graph
        for (int j = 0; j < k - 1; ++j) {
            adjacency_graph[route[j] - 1][route[j + 1] - 1] = 1;
            adjacency_graph[route[j + 1] - 1][route[j] - 1] = 1;
        }
 
        // Adding edges to the transfer graph
        add_edges(transfer_graph, route);
    }
 
    print_graph(adjacency_graph);
    print_graph(transfer_graph);
 
    return 0;
}
