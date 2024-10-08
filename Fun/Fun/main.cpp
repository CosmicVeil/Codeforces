//
//  main.cpp
//  Fun
//
//  Created by Mohan Dixit on 2024-09-05.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        int n,x;
        cin >> n >> x;
        
        ll total = 0;
        
        for(int a = 1; a <= x-2;a++){
            for(int b = 1; b <= n/a;b++){
                total += max(min(x-a-b, (n-a*b)/(a+b)),0);
            }
        }
        
        cout << total << endl;
    }
    return 0;
}
