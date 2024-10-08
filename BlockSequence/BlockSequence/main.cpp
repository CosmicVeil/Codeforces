//
//  main.cpp
//  BlockSequence
//
//  Created by Mohan Dixit on 2024-09-12.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        vector<int> dp(n+5);
        vector<int> nums(n);
        
        for(int i = 0; i < n;i++){cin >> nums[i];}
        
        dp[n+1]=0;
        dp[n] = 0;
        
        for(int i = n-1;i >= 0;i--){
            if(nums[i]+i+1 > n){
                dp[i] = min(n-i, dp[i+1]+1);
            }else{
                dp[i] = min(dp[i+1]+1, dp[i+nums[i]+1]);
            }
        }
        
        cout << dp[0] << endl;
        
    }
    return 0;
}
