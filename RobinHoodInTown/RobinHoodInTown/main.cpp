//
//  main.cpp
//  RobinHoodInTown
//
//  Created by Mohan Dixit on 2024-09-21.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> a;
ll sum;
ll n;
ll max_val_ind;

bool check(ll x){
    sum += x;
    
    int count = 0;
    
    for(ll i = 0; i < n;i++){
        
        if(i == max_val_ind){
            continue;
        }
        if(a[i]*n*2 < sum){
            count++;
        }
        
        if(count*2 > n){
            sum-=x;
            return true;
        }
    }
    
    sum -= x;
    
    if(count*2 > n){
        return true;
    }
    return false;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        cin >> n;
        
        sum = 0;
        
        a.clear();
        max_val_ind = 0;
        
        for(int i =0;i<n;i++){
            ll temp;cin >> temp;
            a.push_back(temp);
            sum += temp;
            if(temp > a[max_val_ind]){
                max_val_ind = i;
            }
        }
        
        ll L = 0; ll R =LONG_LONG_MAX/2-1;
        
        ll min_val = LONG_LONG_MAX;
        
        while(L<=R){
            ll mid = (L+R)/2;
            
            if(check(mid)){
                R=mid-1;
                min_val = min(min_val, mid);
            }else{
                L = mid+1;

            }
        }
        
        if(min_val == LONG_LONG_MAX){
            cout << -1 << endl;
        }else{
            cout << min_val << endl;
        }
        
    }
    return 0;
}
