//
//  main.cpp
//  ArrayFix
//
//  Created by Mohan Dixit on 2024-03-25.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int N;cin >> N;
    
    while(N--){
        
        int n;
        cin >> n;
        
        vector<int> vals;
        
        for(int i = 0; i < n;i++){
            int d;
            cin >> d;
            
            vals.push_back(d);
        }
        
        vector<int> ans;
        
        for(int i = 0; i < n-1;i++){
            int curr = vals[i];
            int next = vals[i+1];
            
            if(next>= curr or curr < 10){
                vals.push_back(curr);
                continue;
            }
            
            string curr_str = to_string(curr);
            int first = curr_str[0]-'0';
            int second = curr_str[1] - '0';
            
            ans.push_back(first);
            ans.push_back(second);
        }
        
        ans.push_back(vals[n-1]);
        
        bool works = true;
        
        for(int i = 0; i < ans.size()-1;i++){
            if(ans[i] > ans[i+1]){
                works = false;
            }
        }
        
        if(works){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
            
        }
    }
    return 0;
}
