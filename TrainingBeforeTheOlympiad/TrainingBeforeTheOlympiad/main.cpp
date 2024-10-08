//
//  main.cpp
//  TrainingBeforeTheOlympiad
//
//  Created by Mohan Dixit on 2024-07-15.
//

#include <bits/stdc++.h>
using namespace std;

using ll = long long;


ll CalcOptimal(ll odds,ll  sum, ll len){
    if(odds%3==0){
        return sum-odds/3;
    }else if(odds%3==1){
        if(len != 1){
            return sum-odds/3-1;
        }else{
            return sum;
        }
    }else{
        return sum-odds/3;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    ll N;
    cin >> N;
    
    while(N--){
        ll a;
        cin >> a;
        
        vector<ll> nums;
        ll sum = 0;
        ll odds = 0;
        vector<ll> ans(a);
        
        for(ll i = 0; i < a;i++){
            ll temp;cin >> temp;
            
            if(temp%2==1){
                odds++;
            }
            
            nums.push_back(temp);
            sum+= temp;
            
            cout << CalcOptimal(odds, sum, i+1) << " ";
        }
        cout << endl;
        
    }
    return 0;
}
