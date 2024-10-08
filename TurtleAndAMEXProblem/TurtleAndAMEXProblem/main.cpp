//
//  main.cpp
//  TurtleAndAMEXProblem
//
//  Created by Mohan Dixit on 2024-08-25.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<bool> tmplate(2*100000+3);
vector<bool> integers_needed(2*100000+3);

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    for(int i = 0; i < 2*100000+3;i++){
        tmplate[i] = false;
    }
    
    while(t--){
        ll n,m;
        cin >> n >> m;
        
        ll curr_max = 0;

        for(int i = 0; i < n;i++){
            integers_needed = tmplate;
            int len;cin >> len;
            
            vector<int> nums(len);
            
            for(int i = 0; i < len;i++){
                cin >> nums[i];
                if(nums[i] < 2*100000+3){
                    integers_needed[nums[i]] = true;
                }
            }
            
            int not_found = 0;
            
            
            for(int i = 0; i< 2*100000+3;i++){
                if(!integers_needed[i]){
                    if(not_found == 0){
                        not_found++;
                    }else{
                        if(i>curr_max){curr_max=i;};
                        break;
                    }
                }
            }
        }
        
        if(curr_max >= m){
            cout << curr_max*(m+1) << endl;
        }else{
            cout << (ll)(curr_max*(curr_max+1) +  m*(m+1)/2 - curr_max*(curr_max+1)/2) << endl;
        }
        
    }
    
    return 0;
}
