//
//  main.cpp
//  TrackingSegments
//
//  Created by Mohan Dixit on 2024-09-09.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        int n,m;cin >> n >> m;
        
        vector<vector<int>> segments(m);
        
        for(int i = 0; i < m;i++){
            int l,r;cin >> l >> r;
            
            segments[i] = {l,r};
        }
        
        int q;cin >> q;
        vector<int> changes(q);
        
        for(int i=0;i<q;i++){cin >> changes[i];}
        
        
        int L = 0;int R = q;
        
        int min_worked = INT_MAX;
        
        while(L <= R){
            int mid = (L+R)/2;
            
            vector<int> curr(n+1,0);
            
            for(int i =0; i < mid;i++){
                curr[changes[i]] = 1;
            }
            
            vector<int> pref(n+5);
            pref[0] = 0;
            
            for(int i = 1; i <= n;i++){
                pref[i] = pref[i-1]+(curr[i]==1);
            }
            
            bool works = false;
            
            for(int i = 0; i < m;i++){
                vector<int> seg = segments[i];
                
                if(pref[seg[1]] - pref[seg[0]-1] >= (seg[1]-seg[0]+1)/2+1){
                    works = true;
                    min_worked = min(mid, min_worked);
                    break;
                }
            }
            
            if(works){
                R = mid-1;
            }else{
                L = mid+1;
            }
            
        }
        
        if(min_worked == INT_MAX){
            min_worked = -1;
        }
        
        cout << min_worked << endl;
        
    }
    return 0;
}
