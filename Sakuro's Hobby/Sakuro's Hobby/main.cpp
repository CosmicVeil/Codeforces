//
//  main.cpp
//  Sakuro's Hobby
//
//  Created by Mohan Dixit on 2024-09-01.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    
    while(t--){
        int n;cin >> n;
        vector<int> p(n);
        string types;
        
        vector<int> ans(n);
        
        for(int i=0;i<n;i++){
            int temp;
            
            cin >> temp;
            
            p[i] = temp-1;
            
            ans[i] = -1;
        }
        
        cin >> types;
        

        
        
        for(int i = 0;i < n;i++){
            if(ans[i]!=-1){
                continue;
            }else{
                int curr = i;
                int sum = 0;
                vector<int> cycled;
                
                while(true){
                    if(types[curr]=='0'){
                        sum++;
                    }
                    
                    curr = p[curr];
                    
                    if(curr != i){
                        cycled.push_back(curr);
                    }else{
                        break;
                    }
                }
                
                for(int i = 0; i < cycled.size();i++){
                    ans[cycled[i]] = sum;
                }
                ans[i] = sum;
            }
        }
        
        for(int i = 0; i < n;i++){
            cout << ans[i] << " ";
        }
        
        cout << endl;
    }
    return 0;
}
