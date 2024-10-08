//
//  main.cpp
//  MaximizeTheRoot
//
//  Created by Mohan Dixit on 2024-08-26.
//

#include <bits/stdc++.h>
using namespace std;

map<int,vector<int>> edges;
map<int,int> points;

//int min_val = INT_MAX;

int dfs(int n){
    
    if(edges.count(n) == 0){
        return points[n];
    }
    
    int curr_min = INT_MAX;
    
    for(int i = 0; i < edges[n].size();i++){
        curr_min = min(dfs(edges[n][i]), curr_min);
    }
    
    if(n!=0){
        return min((points[n] + curr_min)/2,curr_min);
    }else{
        return points[n]+curr_min;
    }
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        edges.clear();
        points.clear();
        //min_val = INT_MAX;
        
        int n;cin >> n;
        
        
        for(int i = 0;i < n;i++){
            int temp;cin >> temp;
            
            points[i] = temp;
        }
        
        for(int i = 1; i < n;i++){
            int parent;cin >> parent;
            parent--;
            
            if(edges.count(parent) == 0){
                edges[parent] = {i};
            }else{
                edges[parent].push_back(i);
            }
        }
        
        cout << dfs(0) << endl;
        
        
    }
    return 0;
}
