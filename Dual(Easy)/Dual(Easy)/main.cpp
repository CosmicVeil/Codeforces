//
//  main.cpp
//  Dual(Easy)
//
//  Created by Mohan Dixit on 2024-10-03.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        int n;cin >> n;
        vector<int> vals(n);
        
        for(int i =0;i<n;i++){cin>>vals[i];}
        
        int currMax = -1;
        int currMaxInd = -1;
        
        vector<string> oper;
        
        for(int i =0; i < n;i++){
            if(vals[i] >= currMax){
                currMax = vals[i];
                currMaxInd = i;
            }else{
                
                while(true){
                    if(vals[i] < currMax){
                        oper.push_back(to_string(i+1) + " " + to_string(currMaxInd+1));
                        vals[i] += currMax;
                    }else{
                        break;
                    }
                }
                
                currMaxInd = i;
                currMax += vals[i];
            }
        }
        
        cout << oper.size() << endl;
        
        for(int i = 0; i < oper.size();i++){
            cout << oper[i] << endl;
        }
    }
    return 0;
}
