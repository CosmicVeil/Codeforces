//
//  main.cpp
//  ExpectedMedian
//
//  Created by Mohan Dixit on 2024-09-02.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int mod_num = 1e9+7;


vector<ll> factorial(200005);

void calc(){
    factorial[0] = 1;
    
    for (int i = 1; i <= 2e5+5; i++) {
        factorial[i] = factorial[i - 1] * i % mod_num;
    }
}

ll power(ll a, ll b){
    ll ans = 1;
    
    while(b> 0){
        if(b%2){
            ans = ans*a % mod_num;
        }
        b /= 2;
        a = (a*a) % mod_num;
    }
    
    return ans;
}

ll choose(ll n, ll k){
    
    if(k>n){return 0;}
    
    return factorial[n]*power(factorial[k]*factorial[n-k]%mod_num, 1e9+5)%mod_num;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    calc();
    int t;cin >> t;
    
    while(t--){
        ll n,k;cin >> n >> k;
        
        
        ll sum = 0;
        ll num1s = 0;
        
        for(int i = 0; i < n;i++){
            int temp;
            cin >> temp;
            
            if(temp == 1){
                num1s++;
            }
        }
        
        for(ll i = k/2+1;i <= k;i++){
            sum += choose(num1s, i)*choose(n-num1s, k-i)%mod_num;
            sum %= mod_num;
        }
        
        cout << sum%mod_num << endl;
    }
    return 0;
}
