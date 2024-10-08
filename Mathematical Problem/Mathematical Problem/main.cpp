//
//  main.cpp
//  Mathematical Problem
//
//  Created by Mohan Dixit on 2024-07-22.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int N;
    cin >> N;
    
    while(N--){
        int a;
        cin >> a;
        
        string s;
        
        
        for(int i = 0; i < a;i++){
            char temp;
            cin >> temp;
            
            s += temp;
        }
        
        int min_sum = INT_MAX;
        
        for(int i = 2; i < a+1;i++){
            vector<int> nums;
            
            for(int j = 0; j < i-2;j++){
                int val = s[j] - '0';
                nums.push_back(val);
            }
            
            string ind = s.substr(i-2,2);
            int val = stoi(ind);
 
            nums.push_back(val);
            
            for(int j = i; j < a;j++){
                int val = s[j] - '0';
                nums.push_back(val);
            }
            int sum = nums[0];
            if(sum == 0){
                min_sum = 0;
            }else{
                
                for(int i = 1;i < nums.size();i++){
                    if(nums[i] == 0){
                        sum = 0;
                        break;
                    }else if(nums[i] == 1){
                        continue;
                    }else if(sum == 1){
                        sum *= nums[i];
                        continue;
                    }
                    sum += nums[i];
                }
            }
            
            min_sum = min(min_sum, sum);
        }
        
        cout << min_sum << endl;
        
        

        
    }
    return 0;
}
