//
//  main.cpp
//  Sofia and the Lost Operation
//
//  Created by Mohan Dixit on 2024-07-19.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int t;
    cin >> t;
    
    while(t--){
        int n,m;
        cin >> n;
        
        map<int,int> changes;
        
        vector<int> a(n),b(n);
        
        for(int i = 0; i < n;i++){
            cin >> a[i];
        }
        for(int i = 0; i < n;i++){
            cin >> b[i];
        }
        
        cin >> m;
        vector<int> d(m);

        for(int i = 0; i < m;i++){
            cin >> d[i];
            
            changes[d[i]]++;
        }
        
        bool yes = true;
        
        if(count(b.begin(), b.end(), d[m-1]) == 0){
            cout << "NO" << endl;
        }else{
            for(int i = 0; i < n;i++){
                if(a[i] != b[i]){
                    if(changes[b[i]] == 0){
                        cout << "NO" << endl;
                        yes = false;
                        break;
                    }else{
                        changes[b[i]]--;
                    }
                }
            }
            if(yes){
                cout << "YES" << endl;
            }
        }
        
    }
    return 0;
}
