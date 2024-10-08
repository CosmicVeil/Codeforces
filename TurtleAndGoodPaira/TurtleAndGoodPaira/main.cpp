//
//  main.cpp
//  TurtleAndGoodPaira
//
//  Created by Mohan Dixit on 2024-08-25.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    
    while(t--){
        vector<int> freq(28);

        for(int i = 0; i < 26;i++){
            freq[i] = 0;
        }
        int n;
        cin >> n;
        string s;cin >> s;
        string ans;
        
        for(int i = 0; i < s.size();i++){
            freq[s[i]-'a']++;
        }
        
        while(ans.size() < n){
            for(int i = 0; i < 26;i++){
                if(freq[i] > 0){
                    char c = i+'a';
                    ans += c;
                    freq[i]--;
                }

            }
        }
        
        cout << ans << endl;
        
        
    }
    return 0;
}
