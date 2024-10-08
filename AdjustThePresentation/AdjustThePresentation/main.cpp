//
//  main.cpp
//  AdjustThePresentation
//
//  Created by Mohan Dixit on 2024-10-06.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        int n,m,q;
        cin >> n >> m >> q;
        
        vector<int> a(n);
        
        vector<int> firstInd(n+4);
        
        for(int i= 0 ; i < n+1;i++){
            firstInd[i] = INT_MAX;
        }
        
        for(int i = 0; i < n;i++){
            cin >> a[i];
        }
        
        for(int i =0; i < m;i++){
            int temp;cin >> temp;
            
            firstInd[temp] = min(firstInd[temp], i);
        }
        
        string ans = "YA";
        
        for(int i =1; i < n;i++){
            if(firstInd[a[i]] < firstInd[a[i-1]]){
                ans = "TIDAK";
                break;
            }
        }
        
        cout << ans << endl;
        
    }
    return 0;
}
