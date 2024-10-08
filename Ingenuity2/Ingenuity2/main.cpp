//
//  main.cpp
//  Ingenuity2
//
//  Created by Mohan Dixit on 2024-10-01.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int t;cin >> t;
    
    while(t--){
        int n;cin >> n;
        string s;cin >> s;
        
        int xInd = 0;
        int yInd = 0;
        
        for(auto &c: s){
            if(c=='N'){
                yInd++;
            }else if(c=='S'){
                yInd--;
            }else if(c== 'E'){
                xInd++;
            }else{
                xInd--;
            }
        }
        
        if(xInd % 2 || yInd % 2 || (s.size() ==2 && s[0]!= s[1])){
            cout << "NO" << endl;
        }else{
            xInd /= 2;
            yInd /=2;
            
            int rXInd = 0;
            int rYInd = 0;
            
            string ans = "R";
            
            if(s[0]=='N'){
                rYInd++;
            }else if(s[0]=='S'){
                rYInd--;
            }else if(s[0] == 'E'){
                rXInd++;
            }else if(s[0] == 'W'){
                rXInd--;
            }
            
            for(int i = 1; i < s.size();i++){
                char c = s[i];
                if(c=='N'){
                    if(rYInd >= yInd){
                        ans += "H";
                    }else{
                        ans += "R";
                        rYInd++;
                    }
                }else if(c=='S'){
                    if(rYInd <= yInd){
                        ans += "H";
                    }else{
                        ans += "R";
                        rYInd--;
                    }
                }else if(c== 'E'){
                    if(rXInd >= xInd){
                        ans += "H";
                    }else{
                        ans += "R";
                        rXInd++;
                    }
                }else if(c== 'W'){
                    if(rXInd <= xInd){
                        ans += "H";
                    }else{
                        ans += "R";
                        rXInd--;
                    }
                }
            }
            if(rXInd == xInd && rYInd == yInd){
                cout << ans << endl;
            }else{
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
