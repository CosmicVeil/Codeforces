//
//  main.cpp
//  NishaAndGoodArrays
//
//  Created by Mohan Dixit on 2024-05-19.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int N;
    cin >> N;

    while (N--){
        int a;
        cin >> a;
        
        int min_val = 1e9;
        int min_ind = 0;
        
        vector<int> nums;
        
        vector<string> ans;
        
        for(int i = 0; i < a;i++){
            int var;
            cin >> var;
            nums.push_back(var);
            
            if(var < min_val){
                min_val = var;
                min_ind = i;
            }
        }
        
        for(int i = 0; i < a;i++){
            if (i == min_ind){
                continue;
            }
            
            int x = min_val;
            int y = min_val + abs(min_ind-i);
            
            string ans_string = to_string(i+1) +" " + to_string(min_ind+1) + " " + to_string(y) + " " + to_string(x);
            
            ans.push_back(ans_string);
        }
        
        cout << ans.size() << endl;
        
        for(int i = 0; i < ans.size();i++){
            cout << ans[i] << endl;
        }
        
    }
    return 0;
}
