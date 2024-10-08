//
//  main.cpp
//  Turtle and Piggy Are Playing a Game 2
//
//  Created by Mohan Dixit on 2024-08-25.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        int n; cin >> n;
        
        vector<int> nums(n);
        
        for(int i=0;i<n;i++){cin >> nums[i];}
        
        sort(nums.begin(), nums.end());
        
        cout << nums[n/2] << endl;
    }
    return 0;
}
