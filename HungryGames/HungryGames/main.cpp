//
//  main.cpp
//  HungryGames
//
//  Created by Mohan Dixit on 2024-09-07.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        int n,k;
        cin >> n >> k;
        
        //ll sum = n*(n+1)/2;
        
        vector<ll> vals(n+1);
        for(int i =1;i<=n;i++){cin >> vals[i];}
        
        partial_sum(vals.begin(), vals.end(), vals.begin());
        
        vector<int> dp(n+2);
        
        for(int i = n-1; i >= 0 ;i--){
            int closest = upper_bound(vals.begin(), vals.end(), vals[i]+k) - vals.begin();
            
            dp[i] = dp[closest] + closest - i - 1;
        }
        
        cout << accumulate(dp.begin(), dp.end(), 0ll) << endl;
        
    }
    return 0;
}
