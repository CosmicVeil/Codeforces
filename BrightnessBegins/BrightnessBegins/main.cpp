//
//  main.cpp
//  BrightnessBegins
//
//  Created by Mohan Dixit on 2024-09-29.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        ll k; cin >> k;
        
        ll L = 0; ll R = 1e9;
        
        ll ans = 0;
        
        while(L <= R){
            ll mid = (L+R)/2;
            
            if(mid*mid >= k+mid){
                R = mid-1;
            }else{
                L = mid+1;
                ans = max(ans, mid);
            }
        }
        
        cout << k+ans << endl;
    }
    return 0;
}
