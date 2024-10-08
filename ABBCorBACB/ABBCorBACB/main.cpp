//
//  main.cpp
//  ABBCorBACB
//
//  Created by Mohan Dixit on 2024-09-08.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        string s;cin >> s;
        
        int countA = 0;
        
        for(int i = 0; i < s.size();i++){
            if(s[i] == 'A'){
                countA++;
            }
        }
        
        if(countA == s.size() || countA == 0){
            cout << 0 << endl;
        }else{
            if(s[0] == 'B' || s[s.size()-1] == 'B'){
                cout << countA << endl;
            }else{
                int min_dist = INT_MAX;
                int nearest = -1;
                
                for(int i = 1; i < s.size();i++){
                    if(s[i] == 'B'){
                        min_dist = min(min_dist, i-nearest-1);
                        nearest = i;
                    }
                }
                
                min_dist = min(min_dist, (int) s.size()-1-nearest);
                
                cout << countA - min_dist << endl;
            }
        }
    }
    return 0;
}
