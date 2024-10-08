//
//  main.cpp
//  LongestGoodArray
//
//  Created by Mohan Dixit on 2024-09-01.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        ll l,r;cin >> l>>r;
        
        ll diff = r-l;
        
        for(int i = 1; i < 1000000;i++){
            if(i*i+i == 2*diff){
                cout << i+1 << endl;
                break;
            }else if(i*i+i > 2*diff){
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}
