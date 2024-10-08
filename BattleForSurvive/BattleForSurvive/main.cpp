//
//  main.cpp
//  BattleForSurvive
//
//  Created by Mohan Dixit on 2024-09-30.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        int n;cin >> n;
        
        vector<long long> vals(n);
        
        long long sum = 0;
        
        for(int i =0;i < n;i++){
            cin >> vals[i];
            sum += vals[i];
        }
        
        cout << sum-2*vals[n-2] << endl;
    }
    return 0;
}
