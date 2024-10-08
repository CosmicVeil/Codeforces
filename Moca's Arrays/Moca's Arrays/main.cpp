//
//  main.cpp
//  Moca's Arrays
//
//  Created by Mohan Dixit on 2024-06-02.
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
        
        vector<int> nums;
        
        for(int i = 0; i < a;i++){
            int b;
            cin >> b;
            nums.push_back(b);
        }
        
        sort(nums.begin(),nums.end());
        
        int min1 = nums[0];
        int min2 = min1;
        
        for(int i = 1; i < a;i++){
            int curr = nums[i];
            
            if(curr % min1!= 0){
                min2 = curr;
                break;
            }
        }
        
        
        string ans = "YES";
        
        for(int i = 2; i < a;i++){
            int curr = nums[i];
            
            if(curr % min1 != 0 && curr % min2 != 0){
                ans = "NO";
                break;
            }
        }
        
        cout << ans << endl;
    }
    return 0;
}
