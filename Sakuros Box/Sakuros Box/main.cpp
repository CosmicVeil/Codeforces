//
//  main.cpp
//  Sakuros Box
//
//  Created by Mohan Dixit on 2024-09-01.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        int n;cin >> n;
        
        vector<ll> vals(n);
        
        ll mod_num = 1000000007;
        
        ll sum = 0;
        
        ll p = 0;
        ll q = n*(n-1)/2 % mod_num;
        
        for(int i=0;i < n;i++){cin >> vals[i];}
        
        for(int i = 1; i < n;i++){
            sum += vals[i]*vals[0];
            sum %= 1000000007;
        }
        
        ll prev_sum = sum;
        
        p += sum;
        
        
        for(int i = 1; i < n-1;i++){
            prev_sum = (prev_sum-vals[i]*vals[i-1])/vals[i-1]*vals[i] % mod_num;
            p += prev_sum;
            p %= mod_num;
        }
        
        
        ll power = mod_num-2;
        
        long long q_val = 1;
        while (power > 0) {
            if (power % 2) {
                q_val = (q_val * q) % mod_num;
            }
            q = (q * q) % mod_num;
            power /= 2;
        }
        
        
        cout << p*q_val % mod_num << endl;
    }
    return 0;
}
