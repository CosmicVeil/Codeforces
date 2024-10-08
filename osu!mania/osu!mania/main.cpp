//
//  main.cpp
//  osu!mania
//
//  Created by Mohan Dixit on 2024-09-03.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        int n;cin >> n;
        
        vector<string> vals(n);
        
        for(int i =0; i < n;i++){cin >> vals[n-i-1];}
        
        for(int i = 0; i < n;i++){
            string curr = vals[i];
            
            int ind = curr.find('#');
            
            cout << ind+1 << " ";
        }
        
        cout << endl;
    }
    return 0;
}
