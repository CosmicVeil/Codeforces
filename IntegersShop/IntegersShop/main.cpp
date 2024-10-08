//
//  main.cpp
//  IntegersShop
//
//  Created by Mohan Dixit on 2024-09-26.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        
        int n;cin >> n;
        
        int minL = INT_MAX;
        int maxR = -1;
        
        int costMin = 0;
        int costMax = 0;
        
        bool same = false;
        
        while(n--){
            int l,r,c;
            
            cin >> l >> r >> c;
            
            if(l == minL && r == maxR){
                if(c < costMax + costMin){
                    same = true;
                }
            }else if(l <= minL && r >= maxR){
                same = true;
            }else{
                if(l < minL){
                    same = false;
                }else if(r > maxR){
                    same = false;
                }
            }
            
            if(l == minL){
                costMin = min(c,costMin);
            
            }else if(l < minL){
                costMin = c;
                minL = l;
            }
            
            
            if(r == maxR){
                costMax = min(c,costMax);
            }else if(r > maxR){
                costMax = c;
                maxR = r;
            }
            
            if(same){
                cout << costMax << endl;
            }else{
                cout << costMax+costMin << endl;
            }
            
            
        }
    
    }
    return 0;
}
