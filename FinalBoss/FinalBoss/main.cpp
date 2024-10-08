//
//  main.cpp
//  FinalBoss
//
//  Created by Mohan Dixit on 2024-09-08.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int h,n;

vector<int> damage;
vector<int> cooldown;


bool check(ll time){
    ll damage_done = 0;
    
    for(int i = 0; i < n;i++){
        damage_done += ((time-1)/cooldown[i]+1)*damage[i];
        
        if(damage_done >= h){
            return true;
        }
    }
    return false;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        cin >> h >> n;
        
        damage.clear();
        cooldown.clear();
        
        for(int i = 0; i < n;i++){
            int temp;cin >> temp; damage.push_back(temp);
        }
        for(int i = 0; i < n;i++){
            int temp;cin >> temp; cooldown.push_back(temp);
        }
        
        ll L = 0;
        ll R = 4*1e10+7;
        
        ll min_mid = LONG_LONG_MAX;
        
        while(R > L){
            ll mid = (L+R+1)/2;
            
            if(check(mid)){
                R = mid-1;
                min_mid = min(min_mid, mid);
            }else{
                L = mid;
            }
        }
        
        cout << min_mid << endl;
    }
    return 0;
}
