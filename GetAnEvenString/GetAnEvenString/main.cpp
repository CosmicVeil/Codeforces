//
//  main.cpp
//  GetAnEvenString
//
//  Created by Mohan Dixit on 2024-05-24.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int N;
    cin >> N;
    
    while(N--){
        string s;cin>>s;
        
        vector<bool> done(26,false);
        int siz = 0;
        
        for(int i = 0; i < s.size();i++){
            char c = s[i];
            
            if(done[c-'a']){
                siz += 2;
                vector<bool> temp(26,false);
                done = temp;
            }else{
                done[c-'a'] = true;
            }
        }
        
        cout << s.size()-siz << endl;
    }
    return 0;
}
