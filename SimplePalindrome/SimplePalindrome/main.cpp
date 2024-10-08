//
//  main.cpp
//  SimplePalindrome
//
//  Created by Mohan Dixit on 2024-09-14.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        int n;cin >> n;
        
        vector<char> vals = {'a', 'e', 'i', 'o', 'u'};
        
        string s;
        
        for(int i = 0; i < n;i++){
            s += vals[i%5];
        }
        
        sort(s.begin(), s.end());
        
        cout << s << endl;
        
        
    }
    return 0;
}
