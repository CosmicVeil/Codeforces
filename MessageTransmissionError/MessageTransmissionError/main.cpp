//
//  main.cpp
//  MessageTransmissionError
//
//  Created by Mohan Dixit on 2024-08-31.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, const char * argv[]) {
    // insert code here...
    string s;
    cin >> s;
    
    string fina{s[0]};
    
    
    string ans = "NO";
    string temp;
    
    for(int i = 1; i < (s.size()+1)/2;i++){
        
        
        if(ans=="YES"){
            break;
        }
        temp = "";
        fina+=s[i];
        

        
        if(s[i]==fina[0]){
            for(int j = 0; j+i<s.size();j++){
                if(s[j] == s[j+i]){
                    temp += s[j];
                    
                    if(j+i==s.size()-1){
                        ans = "YES";
                        break;
                    }
                }else{
                    break;
                }
            }
        }
        
    }
    
    
    if(ans=="YES"){
        cout << ans << endl;
        cout << temp << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
