//
//  main.cpp
//  JumpingThroughSegments
//
//  Created by Mohan Dixit on 2024-03-27.
//

#include <bits/stdc++.h>
using namespace std;

bool works(int k, vector<vector<int>> seg){
      
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        vector<vector<int>> segments;
        segments.resize(n);
        
        for(int i =0 ; i < n;i++){
            int x;
            int y;
            cin >> x >> y;
            segments[i] = {x,y};
        }
        
        int L = 0;
        int R = 1<<30;
        
        while(R > L){
            int mid = (L+R)/2;
            
            if(works(mid, segments)){
                R = mid-1;
            }else{
                L = mid;
            }
        }
    }
    return 0;
}
