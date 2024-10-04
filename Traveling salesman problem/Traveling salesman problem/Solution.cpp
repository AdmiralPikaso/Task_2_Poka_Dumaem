#include "Solution.h"

const int INF = std::numeric_limits<int>::max();

int tsp(std::vector<std::vector<int>>& graph, int start) {
    int n = graph.size();
    std::vector<int> vertices;
    for (int i = 0; i < n; i++) {
        if (i != start) {
            vertices.push_back(i);
        }
    }

    int min_path = INF;
    do {
        int current_pathweight = 0;
        int k = start;
        for (int i = 0; i < vertices.size(); i++) {
            current_pathweight += graph[k][vertices[i]];
            k = vertices[i];
        }
        current_pathweight += graph[k][start];
        min_path = std::min(min_path, current_pathweight);

    } while (next_permutation(vertices.begin(), vertices.end()));

    return min_path;
}




