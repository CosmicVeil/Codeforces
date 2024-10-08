//
//  main.cpp
//  TurtleAndGoodStrings
//
//  Created by Mohan Dixit on 2024-08-25.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int N;cin >> N;
    
    while(N--){
        int n;cin >> n;
        
        string s;cin >> s;
        
        if(s[0] == s[n-1]){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }
               
    return 0;
}
