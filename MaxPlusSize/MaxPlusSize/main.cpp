//
//  main.cpp
//  MaxPlusSize
//
//  Created by Mohan Dixit on 2024-09-27.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        int n;cin >> n;
        
        vector<int> a(n);
        
        for(int i =0;i < n;i++){cin >> a[i];}
        
        int maxOdd = 0;
        int maxEven = 0;
        
        for(int i = 0; i < n;i++){
            if(i%2==1){
                maxOdd = max(maxOdd, a[i]);
            }else{
                maxEven = max(maxEven, a[i]);
            }
        }
        
        cout << max(maxOdd + n/2, maxEven + (n+1)/2) << endl;
    }
    return 0;
}
