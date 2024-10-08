//
//  main.cpp
//  CCDT
//
//  Created by Mohan Dixit on 2024-03-27.
//

#include <bits/stdc++.h>
using namespace std;

#define ll long long;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;
    cin >> t;
    
    while(t--){
        
        vector<bool> points;
        vector<vector<int>> edges;
        points.resize(1<<18);
        
        int N;
        cin >> N;
        
        int number = N-1;
        points[1] = true;
        
        for(int i =0 ; i < N-1;i++){
            int x,y;
            cin >> x >> y;
            
            edges.push_back({x,y});
        }
        
        int ans = 0;
        
        while (number > 0){
            for(int i = 0; i < N-1;i++){
                if(points[edges[i][0]]){
                    
                    if(!points[edges[i][1]]){
                        number--;
                    }
                    points[edges[i][1]] = true;
                    if(number == 0){
                        break;
                    }
                }else if(points[edges[i][1]]){
                    number--;
                    points[edges[i][0]] = true;
                    if(number == 0){
                        break;
                    }
                }
            }
            ans++;
        }
        
        cout << ans << endl;
        
    }
    return 0;
}

