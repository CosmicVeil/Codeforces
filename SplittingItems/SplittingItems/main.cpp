//
//  main.cpp
//  SplittingItems
//
//  Created by Mohan Dixit on 2024-08-18.
//

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        ll n,k;
        cin >> n >> k;
        
        vector<ll> nums(n);
        
        for(int i = 0; i < n;i++){
            cin >> nums[i];
        }
        
        sort(nums.begin(),nums.end(), greater<>());
        
        ll A = 0;
        ll B = 0;
        ll diff = 0;
        
        ll prev;
        
        
        for(int i = 0; i < n;i++){
            if(i%2==0){
                prev = nums[i];
                A += nums[i];
            }else{
                diff += -(nums[i]-prev);
                B += nums[i];
            }
        }
        
        cout << A-B - min(diff,k) << endl;
    }
    return 0;
}
