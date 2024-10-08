//
//  main.cpp
//  LegendOfFreyaTheFrog
//
//  Created by Mohan Dixit on 2024-09-03.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        ll x,y,k;
        cin >> x >> y >> k;
        
        ll typ1 = 0;
        ll typ2 = 0;
        
        if(x%k==0){
            typ1= x/k;
        }else{
            typ1 = x/k+1;
        }
        
        if(y%k==0){
            typ2 = y/k;
        }else{
            typ2= y/k+1;
        }
        
        if(typ1 > typ2){
            cout << (typ1)*2-1 << endl;
        }else{
            cout << typ2*2 << endl;
        }
    }
    return 0;
}
