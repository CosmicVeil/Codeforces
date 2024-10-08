//
//  main.cpp
//  BlackCircles
//
//  Created by Mohan Dixit on 2024-08-11.
//

#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long double, ll> distance(pair<ll,ll> a, pair<ll,ll> b){
    ll x_dist = (a.first-b.first)*(a.first-b.first);
    ll y_dist = (a.second-b.second)*(a.second-b.second);
    
    return make_pair(sqrt(x_dist+y_dist), x_dist+y_dist);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        int n;cin >> n;
        
        vector<pair<int,int>> circles;
        
        for(int i = 0; i < n;i++){
            ll a,b;
            cin >> a >> b;
            
            pair<ll,ll> temp = make_pair(a,b);
            circles.push_back(temp);
        }
        
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        
        pair<ll,ll> curr = make_pair(a, b);
        pair<ll,ll> fina = make_pair(c, d);
        
        long double min_dist = 1.5*1000000000.0;
        
        ll min_sq_dist = LONG_LONG_MAX;
        
        for(int i = 0; i < n;i++){
            min_dist = min(distance(circles[i], fina).first, min_dist);
            min_sq_dist =min(distance(circles[i], fina).second, min_sq_dist);
        }
        
        pair<long double, ll> check =distance(curr, fina);
        
        if(min_dist > check.first){
            cout << "YES" << endl;
            
        }else if(min_dist == check.first){
            
            if(min_sq_dist > check.second){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
            
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
