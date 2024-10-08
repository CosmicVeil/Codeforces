//
//  main.cpp
//  CookieForU
//
//  Created by Mohan Dixit on 2024-05-20.
//

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(int argc, const char * argv[]) {
    // insert code here...
    ll N;
    cin >> N;
    
    while(N--){
        ll a,b,n,m;cin >> a >> b >> n >> m;
        
        string ans = "YES";
        
        if(a+b < m+n || min(a,b) < m){
            ans = "NO";
        }
        cout << ans << endl;
    }
    return 0;
}
