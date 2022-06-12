#include<iostream>
#include <cstdio>
#include <vector>

using namespace std;

struct station {
    vector<pair<int, int>> pipeline;    
    int profit;                         
} stations[500];

int m, n, s, f;

int main() {
     std::cin>>n>>m;
    for (int i = 0; i < m; ++i) {
        int a, b, c;
        std::cin>>a>>b>>c;
        stations[--a].pipeline.emplace_back(--b, c);
    }
     std::cin>>s>>f;
     s--;
    for (int i = 0; i < n - 1; ++i)
        for (int j = 0; j < n; ++j)
          
            for (int k = 0; k < stations[j].pipeline.size(); ++k) {
               
                auto currPipeline = stations[j].pipeline[k];
                if (currPipeline.first != s &&
                    ((j == s) || stations[j].profit))
                    stations[currPipeline.first].profit = max(
                            stations[j].profit +
                            currPipeline.second,
                            stations[currPipeline.first].profit);
            }
    if (!stations[--f].profit)
        std::cout<<"No solution";
    else
        std::cout<<stations[f].profit;
    return 0;
}