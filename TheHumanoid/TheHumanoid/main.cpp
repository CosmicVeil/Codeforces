//
//  main.cpp
//  TheHumanoid
//
//  Created by Mohan Dixit on 2024-09-25.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        long long n,h;cin >> n >> h;
        
        vector<int> vals(n);
        
        vector<vector<int>> order = {{2,2,3}, {2,3,2}, {3,2,2}};
        
        for(int i =0;i<n;i++){cin >> vals[i];}
        
        sort(vals.begin(), vals.end());
        
        int fina = 0;
        long long norm = h;

        for(int j = 0 ; j < order.size();j++){
            
            int ord_ind = 0;
            int cnt = 0;
            
            h = norm;
            
            for(int i = 0; i < n;i++){
                int curr = vals[i];
                
                if(curr >= h){
                    for(int k = ord_ind;k < 3;k++){
                        h *= order[j][k];
                        ord_ind++;
                        if(h > curr){
                            break;
                        }
                    }
                    
                }
                if(h <= curr){
                    break;
                }
                
                h += curr/2;
                cnt++;
            }
            fina = max(fina, cnt);
        }
        
        cout << fina << endl;
    }
    return 0;
}
