//
//  main.cpp
//  FindMinimumOperations
//
//  Created by Mohan Dixit on 2024-09-29.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        int n,k; cin >> n >> k;
        
        if(k==1){
            cout << n << endl;
        }else{
            
            int maxPow = 0;
            
            for(int i = 0; i < 32;i++){
                if(pow(k,i) >= n){
                    maxPow = i;
                    break;
                }
            }
            
            int oper = 0;
            
            for(int i = maxPow; i >= 0;i--){
                
                int mult = n/pow(k,i);
                
                if(n >= pow(k,i)){
                    n -= mult*pow(k,i);
                    oper+= mult;
                }
            }
            
            cout << oper << endl;
        }
    }
    return 0;
}
