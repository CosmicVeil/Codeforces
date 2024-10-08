//
//  main.cpp
//  RemovalsGame
//
//  Created by Mohan Dixit on 2024-08-11.
//

#include <bits/stdc++.h>
using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    int t;
    cin >> t;
    
    while(t--){
        int n;cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        
        for(int i = 0; i < n;i++){
            cin >> a[i];
        }
        for(int i = 0; i < n;i++){
            cin >> b[i];
        }
        
        
        vector<int> c = b;
        
        reverse(c.begin(), c.end());
        
        
        
        if(a==c || a==b){
            cout << "Bob" << endl;
        }else{
            cout << "Alice" << endl;
        }
    }
    return 0;
}
