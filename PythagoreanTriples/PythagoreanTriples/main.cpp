//
//  main.cpp
//  PythagoreanTriples
//
//  Created by Mohan Dixit on 2024-09-28.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        ll n;cin >> n;
        
        int count  = 0;
        
        for(int i = 1; i <= INT_MAX; i+= 2){
            ll c = i*i/2+1;
            ll b = i*i/2;
            
            if(c > n){
                break;
            }
            
            if(i*i + b*b == c*c && b > 0){
                count++;
            }
        }
        
        cout << count << endl;
    }
    return 0;
}
