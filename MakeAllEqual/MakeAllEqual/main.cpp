//
//  main.cpp
//  MakeAllEqual
//
//  Created by Mohan Dixit on 2024-08-20.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        int n; cin >> n;
        
        map<int,int> occ;
        int max_occ = 0;
        int max_occ_num;
        
        for(int i = 0; i < n;i++){
            int temp;cin >> temp;
            
            if(occ.count(temp)){
                occ[temp]++;
            }else{
                occ[temp] = 1;
            }
            
            if(occ[temp] > max_occ){
                max_occ = occ[temp];
                max_occ_num = temp;
            }
        }
        
        cout << n - max_occ << endl;
    }
    return 0;
}
