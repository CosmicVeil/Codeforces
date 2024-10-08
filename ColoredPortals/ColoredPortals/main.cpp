//
//  main.cpp
//  ColoredPortals
//
//  Created by Mohan Dixit on 2024-08-18.
//

#include <bits/stdc++.h>
using namespace std;
#define ll long long;


vector<string> poss = {"BG", "BY", "BR", "GR", "GY", "RY"};

bool check(string a, string b){
    if(a[0] == b[0] || a[0] == b[1] || a[1] == b[0] || a[1] == b[1]){
        return true;
    }
    return false;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        int n,q; cin >> n >> q;
        
        vector<string> vals(n);
        for(int i = 0;i<n;i++){cin >> vals[i];}
        
        vector<int> pref(n);
        vector<int> suff(n);
        map<string,int> mp;
        
        for(int i = 0; i > n;i++){
            pref[i] = 0;
            suff[i] = n+1;
        }
        
        for(int i = 0; i < n;i++){
            for(int j = 0; j < 6;j++){
                if(vals[i]!=poss[j] && check(poss[j], vals[i])){
                    pref[i] = max(pref[i], mp[vals[i]]);
                }
            }
            mp[vals[i]] = i;
        }
        
        while(q--){
            int x,y;
            cin >> x >> y;
            
            if(check(vals[x-1],vals[y-1])){
                cout << y-x << endl;
            }else{
                
            }
        }
    }
    return 0;
}
