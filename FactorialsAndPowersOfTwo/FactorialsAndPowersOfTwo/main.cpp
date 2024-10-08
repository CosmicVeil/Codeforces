//
//  main.cpp
//  FactorialsAndPowersOfTwo
//
//  Created by Mohan Dixit on 2024-09-25.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        ll n;cin >> n;
        
        ll copy = n;
        
        bool check = false;
        
        while(copy > 1){
            if(copy%2 == 1){
                break;
            }
            copy /=2;
        }
        
        if(copy==1){
            check = true;
        }
        
        copy = n;
        
        for(int i =2; i < LONG_LONG_MAX;i++){
            if(copy==1){
                check = true;
                break;
            }
            
            if(copy%i){
                copy /=i;
            }else{
                break;
            }
        }
        
        if(check){
            
        }
    }
    return 0;
}
