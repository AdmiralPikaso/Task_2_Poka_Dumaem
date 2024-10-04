#include "Solution.h"
int main() 
{
    std::vector<std::vector<int>> graph = { {0, 10, 15, 20},
                                           {10, 0, 35, 25},
                                           {15, 35, 0, 30},
                                           {20, 25, 30, 0} };

    int start = 0;
    int min_path = tsp(graph, start);
    for (int i = 0; i < graph.size(); i++)
    {
        for (int j = 0; j < graph[i].size(); j++)
        {
            std::cout << graph[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Minimum path length for the Travelling Salesman Problem: " << min_path << std::endl;

    return 0;
}