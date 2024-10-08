//
//  main.cpp
//  SeatingInABus
//
//  Created by Mohan Dixit on 2024-08-14.
//
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        int n; cin >>n;
        
        
        bool works = true;
        
        map<int,bool> avail;
        
        for(int i = 1; i < n;i++){
            avail[i] = false;
        }
        
        for(int i = 0; i < n;i++){
            int k;cin >> k;
            
            if(i==0){
                avail[k-1] = true;
                avail[k+1] = true;
                continue;
            }
            
            if(!avail[k]){
                works = false;
            }
            
            avail[k-1] = true;
            avail[k+1] = true;
            
        }
        
        if(works){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
