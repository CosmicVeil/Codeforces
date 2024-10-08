//
//  main.cpp
//  NumericStringTemplate
//
//  Created by Mohan Dixit on 2024-08-14.
//
//


#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(int argc, const char * argv[]) {
    // insert code here...
    ll t;cin >> t;
    
    while(t--){
        ll n; cin >> n;
        vector<ll> nums(n);
        for(ll i = 0; i < n;i++){
            cin >> nums[i];
        }
        
        ll m;cin >> m;
        
        while(m--){
            string s;
            cin >> s;
            
            map<char,ll> corres;
            map<ll,char> other;
            vector<ll> fin;
            
            for(ll i = 0; i < n;i++){
                if(corres[s[i]]){
                    fin.push_back((ll) corres[s[i]]);
                }else{
                    if(!other[nums[i]]){
                        corres[s[i]] = nums[i];
                        other[nums[i]] = s[i];
                        fin.push_back(nums[i]);
                    }else{
                        break;
                    }
                }
            }
            
            if(fin == nums && s.size() == n){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
            
        }
    }
    return 0;
}
