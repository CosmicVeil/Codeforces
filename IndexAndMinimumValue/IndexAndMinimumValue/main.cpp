//
//  main.cpp
//  IndexAndMinimumValue
//
//  Created by Mohan Dixit on 2024-08-30.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;
    cin >> t;
    
    while(t--){
        int n,m;
        cin >> n >> m;
        
        vector<ll> nums(n);
        ll max_val = 0;
        
        for(int i = 0; i < n;i++){
            cin >> nums[i];
            max_val = max(max_val, nums[i]);
        }
            

        
        while(m--){
            char c; ll l; ll r;
            cin >> c >> l >> r;
            
            if(l <= max_val && r >= max_val){
                if(c=='+'){
                    max_val++;
                }else{
                    max_val--;
                }
            }
            
            
            if(m!=0){
                cout << max_val << " ";
            }else{
                cout << max_val<<endl;
            }
        }
            
            
            
            
        
    }
    return 0;
}
