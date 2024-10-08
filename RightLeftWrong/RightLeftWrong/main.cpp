//
//  main.cpp
//  RightLeftWrong
//
//  Created by Mohan Dixit on 2024-08-15.
//

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(int argc, const char * argv[]) {
    // insert code here...
    ll t;cin >> t;
    
    while(t--){
        ll n;
        cin >> n;
        
        vector<ll> nums;
        string s;
        
        ll total = 0;
        
        for(ll i = 0; i < n;i++){
            ll temp;cin >> temp; nums.push_back(temp);
            total += temp;
        }
        
        cin >> s;
        
        ll L = 0;
        ll R = n-1;
        ll sum = 0;
        ll combos = 0;
        
        while(L<R){
            if(s[L] == 'L' && s[R] == 'R'){
                sum += total;
                total -= nums[L] + nums[R];
                L++;R--;
            }else if(s[L] == 'L'){
                total -= nums[R];
                R--;
            }else if(s[R] == 'R'){
                total -= nums[L];
                L++;
            }else{
                total -= nums[L] + nums[R];
                L++;R--;
            }
        }
        
        cout << sum << endl;
    }
    return 0;
}
