//
//  main.cpp
//  PriceMaximization
//
//  Created by Mohan Dixit on 2024-08-27.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        int n,k;cin >> n >> k;
        
        long long sum = 0;
        
        vector<int> mods;
        
        for(int i = 0;i < n;i++){
            int temp;cin >> temp;
            
            sum += temp/k;
            
            mods.push_back(temp%k);
        }
        
        sort(mods.begin(),mods.end());
        
        for(int i = n-1, j = 0; i >= 0 && j < i;i--, j++){
            while(i > j && mods[i]+mods[j]<k){j++;}
            
            if(i==j){break;}
            sum++;
        }
        
        cout << sum << endl;

    }
    return 0;
}
