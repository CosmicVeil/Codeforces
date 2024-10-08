//
//  main.cpp
//  GameWithMarbles
//
//  Created by Mohan Dixit on 2024-10-04.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        int n;cin >> n;
        
        vector<pair<ll,ll>> sums(n);
        vector<ll> a(n);
        vector<ll> b(n);
        
        ll tot = 0;
        
        for(int i =0;i<n;i++){
            cin >> a[i];
        }
        
        for(int i =0;i<n;i++){
            cin >> b[i];
            
            sums[i].first = a[i]+b[i];
            sums[i].second = a[i]+b[i]-2;
            
            tot += b[i]-1;
        }
        
        sort(sums.rbegin(), sums.rend());
        
        for(int i = 0; i < n;i+=2){
            tot -= sums[i].second;
        }
        
        cout << -tot << endl;
        
    }
    return 0;
}
