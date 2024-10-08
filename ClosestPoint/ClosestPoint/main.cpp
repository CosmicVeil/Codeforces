//
//  main.cpp
//  ClosestPoint
//
//  Created by Mohan Dixit on 2024-08-17.
//

#include <bits/stdc++.h>
using namespace std;
#define ll long long;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t; cin >> t;
    
    while(t--){
        int n;cin >> n;
        
        vector<int> nums(n);
        
        for(int i = 0; i < n;i++){
            cin >> nums[i];
        }
        
        if(n == 2 && abs(nums[0] - nums[1]) !=1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
