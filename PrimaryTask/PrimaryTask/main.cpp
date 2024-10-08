//
//  main.cpp
//  PrimaryTask
//
//  Created by Mohan Dixit on 2024-08-14.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        string s;
        cin >> s;
        
        bool works = true;
        
        
        if(s.size() == 1){
            works = false;
        }else if(s.substr(0,2) != "10"){
            works = false;
        }else if(s.size() == 2){
            works = false;
        }else if(s[2] == '0'){
            works = false;
        }else if(s.size() ==3 && s[2] == '1'){
            works = false;
        }
        
        if(works){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
