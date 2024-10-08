//
//  main.cpp
//  PullYourLuck
//
//  Created by Mohan Dixit on 2024-09-15.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        

        long long n,x,p;
        cin >> n >> x >> p;
        
        
        long long diff = n-x;
        
        if(x==0){
            diff = 0;
        }
        
        string ans = "NO";
        
        for(long long i = 1; i <= min(2*n,p);i++){
            long long val = (i*(i+1)/2) % n;
            
            if(val == diff){
                ans = "YES";
                break;
            }
        }
        
        cout << ans << endl;
    }
    return 0;
}
