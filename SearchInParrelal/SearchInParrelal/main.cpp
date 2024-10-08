//
//  main.cpp
//  SearchInParrelal
//
//  Created by Mohan Dixit on 2024-09-17.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        int n,s1,s2;
        cin >> n >> s1 >> s2;
        
        vector<int> nums(n);
        vector<int> first;
        vector<int> second;
        
        map<int,vector<int>> corres;
        
        for(int i = 0 ; i < n;i++){
            cin >> nums[i];
            
            if(corres.find(nums[i]) == corres.end()){
                corres[nums[i]] = {i+1};
            }else{
                corres[nums[i]].push_back(i+1);
            }
        }
        
        int count1 = s1;
        int count2 = s2;
        
        
        sort(nums.begin(), nums.end());
        
        for(int j =n-1; j >= 0; j--){
            
            int i = nums[j];
            if(count1 > count2){
                count2+= s2;
                second.push_back(corres[i][corres[i].size()-1]);
                corres[i].pop_back();
            }else{
                count1+= s1;
                first.push_back(corres[i][corres[i].size()-1]);
                corres[i].pop_back();
            }
        }
        
        cout << first.size() << " ";
        
        for(int i =0; i < first.size();i++){
            cout << first[i] << ' ';
        }
        
        cout << endl;
        cout << second.size() << " ";
        
        for(int i =0; i < second.size();i++){
            cout << second[i] << ' ';
        }
        
        cout << '\n';
    }
    return 0;
}
