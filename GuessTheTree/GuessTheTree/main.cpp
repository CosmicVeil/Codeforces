//
//  main.cpp
//  GuessTheTree
//
//  Created by Mohan Dixit on 2024-08-20.
//

//#include <bits/stdc++.h>
//using namespace std;
//
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    
//    return 0;
//}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin >> t;
    
    while(t--){
        int n;
        vector<int> nums;
        cin >> n;
        
        int first_one = INT_MAX;
        int last_one = 0;
        int first_two = INT_MAX;
        int last_two = 0;
        int first_three = INT_MAX;
        int last_three = 0;
        
        int total = n*(n+1)/2;
        
        for(int i = 0; i < n;i++){
            int temp;cin >> temp;
            
            if(temp == 1){
                first_one = min(first_one, i);
                last_one = max(last_one, i);
            }else if(temp == 2){
                first_two = min(first_one, i);
                last_two = max(last_one, i);
            }else{
                first_three = min(first_one, i);
                last_three = max(last_one, i);
            }
            
            nums.push_back(temp);
        }
        
        bool works_1 = false;
        bool works_2 = false;
        bool works_3 = false;
        
        for(int i = first_one+1;i < last_one;i++){
            if(nums[i] == 3){
                works_1 = true;
                break;
            }
        }
        
        for(int i = first_two+1;i < last_two;i++){
            if(nums[i] == 1){
                works_2 = true;
                break;
            }
        }
        
        for(int i = first_three+1;i < last_three;i++){
            if(nums[i] == 2){
                works_3 = true;
                break;
            }
        }
        
        if(!works_1){
            total -= (first_one+1)*(n-last_one);
        }
        
        if(!works_2){
            total -= (first_two+1)*(n-last_two);
        }
        
        if(!works_1){
            total -= (first_three+1)*(n-last_three);
        }
        
        cout << total << endl;
        
        
        
        
        
    }

}
