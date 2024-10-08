//
//  main.cpp
//  SuperLargeArray
//
//  Created by Mohan Dixit on 2024-09-03.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll calc(ll n, ll k, ll x){
    return (n+k)*(n+k-1)/2 - x*(x-1) +(k)*(k-1)/2;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;
    cin >> t;
    
    while(t--){
        ll n,k;cin >> n >> k;
        
        
        ll min_val = LONG_LONG_MAX;
        
        ll l = k;
        ll r = n+k-1;
        
        
        while(l <= r){
            ll mid = (l+r+1)/2;
            
            min_val = min(abs(calc(n, k, mid)), min_val);
            
            if(calc(n, k, mid) > 0){
                l = mid+1;
            }else if(calc(n,k,mid) < 0){
                r = mid-1;
            }else{
                break;
            }
        }
        
        cout << min_val << endl;
    }
    return 0;
}
