//
//  main.cpp
//  RobinHoodAndMajorOak
//
//  Created by Mohan Dixit on 2024-10-02.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        int n,k;cin >> n >> k;
        
        int sum = k*(2*n-k+1)/2;
        
        if(sum%2){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }
    
    return 0;
}
