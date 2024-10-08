//
//  main.cpp
//  BeautifulArray
//
//  Created by Mohan Dixit on 2024-09-05.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        
        int n, k;cin >> n >> k;
        
        
        
        map<int,int> count;
        map<int,bool> visited;
        map<int, vector<int>> values;
        
        vector<int> nums;
        
        for(int i = 0; i < n;i++){
            int val;cin >> val;
            
            
            if(count.find(val%k)==count.end()){
                count[val%k] = 0;
                values[val%k] = {};
            }
            count[val%k]++;
            values[val%k].push_back(val);
            
            if(!visited[val%k]){
                nums.push_back(val%k);
            }
            
            visited[val%k] = true;
            
        }
        
        
        int total = 0;
        
        ll change = 0;
        
        int max_change = 0;
        
        int excuses = n%2;
        
        bool used = false;
        
        for(int i  =0; i < nums.size();i++){
            
            sort(values[nums[i]].begin(),values[nums[i]].end());
            

            if(count[nums[i]] %2 != 0){
                total++;
                    
                
            }else{
                
                //            if(count[nums[i]] != 1){
                //                if(used){
                //                    if(count[nums[i]] == 2){
                //                        max_change = max(max_change, values[nums[i]][1] - values[nums[i]][0]);
                //                    }else{
                //                        max_change = max(max(max_change, values[nums[i]][1] - values[nums[i]][0]), values[nums[i]][count[nums[i]]-1] - values[nums[i]][count[nums[i]]-1]);
                //                    }
                //                }
                //            }
                
                for(int j = 1; j < count[nums[i]];j+=2){
                    
                    change += (values[nums[i]][j] - values[nums[i]][j-1])/k;
                    
                }
            }
            

        }
        
        
        if(total == 0){
            cout << change << endl;
        }else if(total == 1 && n%2==1){
            cout << change << endl;
        
        }else{
            cout << -1 << endl;
        }
        
        
        
        
    }
    return 0;
}
