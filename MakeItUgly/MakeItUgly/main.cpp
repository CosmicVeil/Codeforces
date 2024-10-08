//
//  main.cpp
//  MakeItUgly
//
//  Created by Mohan Dixit on 2024-05-25.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int N;
    cin >> N;
    
    while(N--){
        int a;cin >> a;
        
        vector<int> nums;
        
        int min_val = INT_MAX;
        int max_val = 0;
        
        for(int i = 0; i < a;i++){
            int temp;
            cin >> temp;
            
            nums.push_back(temp);
            min_val = min(min_val, temp);
            max_val = max(max_val, temp);
        }
        
        if(max_val == min_val){
            cout << -1 << endl;
        }else{
            
            int top = 0;
            int bottom = a-1;
            
            for(int i = 0; i < a;i++){
                if(nums[top] == nums[a-1]){
                    top++;
                }else{
                    cout << top << endl;
                    break;
                }
                
                if(nums[bottom] == nums[0]){
                    bottom--;
                }else{
                    cout << a-1-bottom << endl;
                    break;
                }
                
            }
        }
    }
    return 0;
}
