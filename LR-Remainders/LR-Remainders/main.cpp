//
//  main.cpp
//  LR-Remainders
//
//  Created by Mohan Dixit on 2024-08-23.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        int n,m;cin >> n >> m;
        
        vector<int> nums(n);
        
        ll prod = 1;
        
        for(int i = 0; i < n;i++){
            cin >> nums[i];
        }
        
        int L = 0;
        int R = n-1;
        string s;cin >> s;
        
        
        for(int i = 0; i < n;i++){
            
            if(L==R){
                prod = nums[L];
                L--;
                R++;
                break;
            }
            if(s[i] == 'L'){
                L++;
            }else{
                R--;
            }
            
        }
        
        vector<ll> ans;
        
        prod %=m;
        
        
        for(int i = n-2; i >= 0;i--){
            ans.push_back(prod);
            
            if(s[i] == 'L'){
                prod *= (nums[L]%m)%m;
                L--;
            }else{
                prod *= (nums[R]%m)%m;
                R++;
            }
            
            prod%=m;
            
        }
        
        ans.push_back(prod%m);
        
        for(int i = n-1;i >= 0;i--){
            cout << ans[i] << " ";
        }
        cout << endl;
        
    }
    return 0;
}
