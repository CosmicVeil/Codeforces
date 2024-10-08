//
//  main.cpp
//  GameOnTree
//
//  Created by Mohan Dixit on 2024-05-29.
//

#include <bits/stdc++.h>
using namespace std;

int n,t;
map<int,vector<int>> edges;
vector<bool> activated(n, false);
int start;
bool ron = true;

string dfs(int curr){
    map<int,vector<int>> t_edges = edges;
    vector<bool> t_activated = activated;
    int t_start = start;
    bool t_ron = ron;
    
    for(int i = 0; i < edges[n].size();i++){
        int next = edges[n][i];
        dfs(next);
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    cin >> n >> t;

    for(int i = 0;i < n;i++){
        int a,b;
        cin >> a >> b;
        
        if(edges.count({a}) > 0){
            edges[a].push_back(b);
        }else{
            edges[a] = {b};
        }
        
    }
    
    cin >> start;
    
    cout << dfs(start) << endl;
    return 0;
}
