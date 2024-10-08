//
//  main.cpp
//  BinaryCuts
//
//  Created by Mohan Dixit on 2024-05-20.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int N;
    cin >> N;
    
    while(N--){
        string s;
        
        cin >> s;
        
        bool used = false;
        int ans = 1;
        
        for(int i = 1; i < s.size();i++){
            char curr = s[i];
            char prev = s[i-1];
            
            if(curr == '0' && prev=='1'){
                ans++;
            }else if(prev=='0'&&curr=='1'&&used){
                ans++;
            }else if(prev=='0' &&curr=='1'){
                used = true;
            }
            
            
        }
        
        cout << ans << endl;
    }
    return 0;
}
