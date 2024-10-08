//
//  main.cpp
//  Sakuroko's Exam
//
//  Created by Mohan Dixit on 2024-09-01.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        int a,b;cin >> a >> b;
        
        string ans = "NO";
        
        if(b%2==0 && a%2==0){
            ans = "YES";
        }else if(b%2==1 && a%2==0 && a!=0){
            ans = "YES";
        }
        
        cout << ans << endl;
    }
    return 0;
}
