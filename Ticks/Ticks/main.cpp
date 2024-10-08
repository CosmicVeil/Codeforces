//
//  main.cpp
//  Ticks
//
//  Created by Mohan Dixit on 2024-08-23.
//



#include <bits/stdc++.h>
using namespace std;


int n,m,k;
vector<string> grid;

vector<vector<int>> used;

int check_len(int i, int j){
    used.clear();
    int size = 0;
    
    if(grid[i][j] != '/'){
        used.push_back({i,j});
    }
    grid[i][j] = '/';
    
    for(int d = 1;d<min(i,min(j,m-j-1))+1;d++){
        if(grid[i-d][j-d] != '.' && grid[i-d][j+d]!= '.'){
            size++;
            
            if(grid[i-d][j-d] != '/'){
                used.push_back({i-d,j-d});
            }
            if(grid[i-d][j+d] != '/'){
                used.push_back({i-d,j+d});
            }
        
            grid[i-d][j-d] = '/';
            grid[i-d][j+d] = '/';
            
            
            
            
        }else{
            break;
        }
    }
    
    return size;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        cin >> n >> m >> k;
        
        grid.resize(n);
        
        for(int i=0;i<n;i++){cin >> grid[i];}
        
        for(int i = 0; i < n;i++){
            for(int j = 0;j < m;j++){
                char curr = grid[i][j];
                if(curr != '.'){
                    int size = check_len(i, j);
                    
                    if(size < k){
                        for(int l = 0; l < used.size();l++){
                            grid[used[l][0]][used[l][1]] = '*';
                        }
                    }
                }
            }
        }
        
        string ans = "YES";
        
        for(int i = 0; i < n;i++){
            for(int j = 0; j < m;j++){
                if(grid[i][j] == '*'){
                    ans = "NO";
                    break;
                }
            }
        }
        
        cout << ans << endl;
    }
    return 0;
}
