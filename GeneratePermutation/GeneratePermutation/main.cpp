//
//  main.cpp
//  GeneratePermutation
//
//  Created by Mohan Dixit on 2024-08-20.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;
    cin >> t;
    
    while(t--){
        int n;cin >> n;
        
        if(n%2==0){
            cout << -1 << endl;
        }else{
            vector<int> nums(n);
            
            for(int i = 1; i < n+1;i++){
                if(i==1){
                    nums[n/2] = i;
                }else{
                    if(i%2==0){
                        nums[n/2-i/2] = i;
                    }else{
                        nums[n/2+i/2] = i;
                    }
                }
            }
            
            for(int i = 0; i < n;i++){
                if(i!=i-1){
                    cout << nums[i]<< " ";
                }else{
                    cout << nums[i] << endl;
                }
            }
        }
    }
    return 0;
}
