//
//  main.cpp
//  BoringDay
//
//  Created by Mohan Dixit on 2024-08-28.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        int n,l,r;
        cin >> n >> l >> r;
        
        vector<int> nums(n);
        
        for(int i = 0;i < n;i++){cin>>nums[i];}
        
        int i = 0;
        int j = 0;
        
        int total = 0;
        int curr_sum = 0;
        
        curr_sum = nums[0];
        
        while(i != n && j!= n){
            if(i == j){
                if(curr_sum>=l && curr_sum <= r){
                    total++;
                    i++;
                    j++;
                    curr_sum = nums[i];
                }else if(curr_sum >= l){
                    i++;
                    j++;
                    curr_sum = nums[i];
                }else{
                    j++;
                    curr_sum += nums[j];
                }
                
            }else{
                if(curr_sum >= l){
                    if(curr_sum <= r){
                        total++;
                        i = j+1;
                        j = j +1;
                        curr_sum = nums[i];
                    }else{
                        i++;
                        curr_sum -= nums[i-1];
                    }
                }else{
                    j++;
                    curr_sum += nums[j];
                }
            }
        }
        
        cout << total << endl;
    }
    
    
    return 0;
}
