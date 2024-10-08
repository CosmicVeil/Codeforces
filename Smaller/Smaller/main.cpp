//
//  main.cpp
//  Smaller
//
//  Created by Mohan Dixit on 2024-10-07.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        int n;cin >> n;
        
        bool sHasNonA = false;
        bool tHasNonA = false;
        
        ll sNumA = 1;
        ll tNumA = 1;
        
        //int sSize = 1;
        //int tSize = 1;
        
        while(n--){
            ll d,k;
            string s;
            cin >> d >> k >> s;
            
            if(tHasNonA){
                cout << "YES" << endl;
                continue;
            }
            
            if(d==1){
                for(auto c : s){
                    if(c=='a'){
                        sNumA += k;
                    }else{
                        sHasNonA = true;
                    }
                }
                //sSize += s.size()*k;
                
            }else{
                for(auto c : s){
                    if(c=='a'){
                        tNumA += k;
                    }else{
                        tHasNonA = true;
                    }
                }
            }
            
            if(tHasNonA){
                cout << "YES" << endl;
                continue;
            }
            
            if(sHasNonA){
                cout << "NO" << endl;
            }else if(sNumA >= tNumA){
                cout << "NO" << endl;
            }else{
                cout << "YES" << endl;
            }
            
        }
    }
    return 0;
}
