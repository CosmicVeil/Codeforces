//
//  main.cpp
//  DistancedColoring
//
//  Created by Mohan Dixit on 2024-08-11.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;
    cin >> t;
    
    while(t--){
        int n,m,k;
        cin >> n >> m >> k;
        
        cout << min(n,k)*min(m,k) << endl;
    }
    return 0;
}
