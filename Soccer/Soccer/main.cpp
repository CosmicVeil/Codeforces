//
//  main.cpp
//  Soccer
//
//  Created by Mohan Dixit on 2024-08-28.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;
    cin >> t;
    
    while(t--){
        int x1,x2,y1,y2;
        
        cin >> x1 >> y1;
        cin >> x2 >> y2;
        
        if(x1 > y1){
            if(x2 < y2){
                cout << "NO" << endl;
            }else{
                cout << "YES" << endl;
            }
        }else{
            if(y2 < x2){
                cout << "NO" << endl;
            }else{
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}
