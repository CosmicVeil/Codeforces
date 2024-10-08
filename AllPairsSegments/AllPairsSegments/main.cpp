//
//  main.cpp
//  AllPairsSegments
//
//  Created by Mohan Dixit on 2024-09-27.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        int n,q;
        cin >> n >> q;
        
        map<ll,ll> vals;
        
        vector<ll> nums(n);
        
        for(int i =0;i<n;i++){cin >> nums[i];}
        
        for(int i = 0; i < n;i++){
        
            ll curr = i*(n-i-1) + n-i-1;

            
            if(vals.find(curr) == vals.end()){
                vals[curr] = nums[i+1] - nums[i]-1;
            }else{
                vals[curr] += nums[i+1]-nums[i]-1;
            }
            
            ll curr2 = i*(n-i) + n-i-1;
            if(vals.find(curr2) == vals.end()){
                vals[curr2] = 1;
            }else{
                vals[curr2]++;
            }
            
            
            if(i==n-2){
                i++;
                ll curr2 = i*(n-i) + n-i-1;
                if(vals.find(curr2) == vals.end()){
                    vals[curr2] = 1;
                }else{
                    vals[curr2]++;
                }
            }
        }
        
        while(q--){
            ll k;cin >> k;
            
            if(vals.find(k) == vals.end()){
                cout << 0 << " ";
            }else{
                cout << vals[k] << " ";
            }
        }
        cout << endl;
        
    }
    return 0;
}
