//
//  main.cpp
//  ArrowPath
//
//  Created by Mohan Dixit on 2024-03-25.
//

#include <bits/stdc++.h>
using namespace std;

vector<vector<char>> graph;
vector<vector<bool>> visited;
int a;

vector<vector<int>> vals = {{0,1}, {0,-1}, {1,0}, {-1,0}};

bool dfs (int x,int y){
    
    if (x > 1 || x < 0 || y > a-1 || y < 0 || visited[x][y]){
        return false;
    }
    
    visited[x][y] = true;
    
    
    if(x== 0 && y == 0){
        int val;
    }
    else if(graph[x][y] == '<'){
        y--;
    }else{
        y++;
    }
    
    
    visited[x][y] = true;
    
    
    if(x == 1 && y == a-1){
        return true;
    }
    
    bool returner = false;
    
    for(int i = 0; i < 4;i++){
        if(dfs(x+vals[i][0], y+vals[i][1])){
            returner = true;
            break;
        }
    }
    
    return returner;
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int N;
    cin >> N;
    
    while(N--){
        
        graph = {{}};
        visited = {{}};
        cin >> a;
        
        graph.resize(2);
        visited.resize(2);
        
        for(int i =0; i < a; i++){
            char c;
            cin >> c;
            
            visited[0].push_back(false);
            graph[0].push_back(c);
        }
        
        for(int i =0; i < a; i++){
            char c;
            cin >> c;
            
            visited[1].push_back(false);
            graph[1].push_back(c);
        }
        
        if (dfs(0,0)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        
    }
    return 0;
}
