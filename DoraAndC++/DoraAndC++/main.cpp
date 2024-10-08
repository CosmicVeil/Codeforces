//
//  main.cpp
//  DoraAndC++
//
//  Created by Mohan Dixit on 2024-08-30.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        int n;
        ll a,b;
        cin >> n >> a >> b;
        
        int diff = gcd(a,b);
        
        vector<int> nums(n);
        

        
        for(int i = 0; i < n;i++){
            int temp;cin >> temp;
            nums[i] = temp%diff;
        }
        
        sort(nums.begin(), nums.end());
        
        int answ = nums[n-1]-nums[0];
        
        for(int i =0; i < n-1;i++){
            answ = min(answ, nums[i]+diff-nums[i+1]);
        }
        
        cout << answ << endl;
        
    }
    return 0;
}
