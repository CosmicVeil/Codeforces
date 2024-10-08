//
//  main.cpp
//  Dora'sSet
//
//  Created by Mohan Dixit on 2024-08-30.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t; cin >> t;
    
    while(t--){
        int l,r;cin >> l >> r;
        
        if(l%2){
            cout << (r-l+2)/4 << endl;
        }else{
            cout << (r-l+1)/4 << endl;
        }
    }
    return 0;
}
