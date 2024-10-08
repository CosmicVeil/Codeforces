//
//  main.cpp
//  InLove
//
//  Created by Mohan Dixit on 2024-09-19.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    multiset<int> left;
    multiset<int> right;
    
    while(t--){
        char s;cin >> s;
        
        int a,b;
        cin >> a >> b;
        
        if(s=='-'){
            left.erase(left.lower_bound(a));
            right.erase(right.lower_bound(b));
        }else{
            left.insert(a);
            right.insert(b);
        }
        
        if(left.size() == 0){
            cout << "NO" << endl;
            continue;
        }
        
        if(*(right.begin()) < *(left.rbegin())){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
