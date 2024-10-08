//
//  main.cpp
//  HitsDifferent
//
//  Created by Mohan Dixit on 2024-09-10.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> ans(2*1e7);

vector<vector<ll>> a(1500, vector<ll>(1500,0));


void create(){
    
    ll curr = 1;
    for(int i=1; i < 1500;i++){
        for(int j = 1; j < i;j++){

            a[j][i-j] = a[j][i-j-1]+a[j-1][i-j] - a[j-1][i-j-1]+curr*curr;
            
            ans[curr] = a[j][i-j];
            curr++;
//            if(curr > 1000007){
//                break;
//            }
        }
    }

}


int main(int argc, const char * argv[]) {
    // insert code here...
    
    create();
    int t;cin >> t;
    
    while(t--){
        ll n;cin >> n;
        
        cout << ans[n] << endl;
        
        
    }
    return 0;
}
