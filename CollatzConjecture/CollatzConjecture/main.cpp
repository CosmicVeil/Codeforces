//
//  main.cpp
//  CollatzConjecture
//
//  Created by Mohan Dixit on 2024-08-28.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while (t--) {
        ll x,y,k;cin >> x >> y >> k;
        
        while(x!=1 && k!=0){
            ll change = (x/y+1)*y-x;
            change = max(change, 1ll);
            change = min(change, k);
            
            x += change;
            
            while(x%y==0){
                x/= y;
            }
            k -= change;
            
        }
        
        cout << k%(y-1)+x << endl;
    }
    return 0;
}
