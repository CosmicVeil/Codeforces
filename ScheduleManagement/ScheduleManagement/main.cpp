//
//  main.cpp
//  ScheduleManagement
//
//  Created by Mohan Dixit on 2024-03-24.
//

#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> freq;
int n,m;

bool check(ll time){
    
    ll need = 0;
    ll free = 0;
    
    for(ll i = 1; i <= n;i++){
        if(freq[i] < time){
            free += (time-freq[i])/2;
        }else{
            need += freq[i]-time;
        }
    }
    
    return free >= need;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int t; cin >> t;
    
    while(t--){
        freq = {};
        cin >> n >> m;
        
        freq.resize(n+1);
        
        for(int i = 0; i < m;i++){
            int x;
            cin >> x;
            freq[x]++;
        }
        
        
        ll l = 0;
        
        ll r = 2*m;
        
        ll ans = -1;
        
        while(l <= r){
            ll mid = (l+r)/2;
            
            if(check(mid)){
                ans = mid;
                r = mid-1;
            }else{
                l = mid+1;
            }
        }
        
        cout << ans << endl;
    }
    return 0;
}
