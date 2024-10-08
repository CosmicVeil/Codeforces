//
//  main.cpp
//  SquareOrNot
//
//  Created by Mohan Dixit on 2024-09-01.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        int n;cin >> n;
        
        string s; cin >> s;
        
        int sqr = sqrt(n);
        
        if(sqr*sqr == n){
            
            string ans = "Yes";
            
            for(int i = 0; i < n;i++){
                int r = i/sqr;
                int c = i%sqr;
                
                if(s[i] == '1'){
                    if(r==0 || r == sqr-1 || c == 0 || c == sqr-1){
                        continue;
                    }else{
                        ans = "No";
                        break;
                    }
                }else{
                    if(r==0 || r == sqr-1 || c == 0 || c == sqr-1){
                        ans = "No";
                        break;
                    }else{
                        continue;
                    }
                }
            }
            cout << ans << endl;
            
            
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}
