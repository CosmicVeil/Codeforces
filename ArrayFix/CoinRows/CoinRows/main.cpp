//
//  main.cpp
//  CoinRows
//
//  Created by Mohan Dixit on 2024-05-20.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int N;
    cin >> N;
    
    while(N--){
        int m;cin >> m;
        
        vector<int> top;
        vector<int> bottom;
        
        vector<int> pref;
        vector<int> suff;
        
        int preft_v = 0;
        int prefb_v = 0;
        
        int sum_of_array = 0;
        
        for(int i = 0; i < m;i++){
            
            int temp;cin >> temp;
            preft_v += temp;
            top.push_back(temp);
            sum_of_array += temp;
            pref.push_back(preft_v);

        }
        for(int i = 0; i < m;i++){
            suff.push_back(prefb_v);
            int temp;cin >> temp;
            prefb_v += temp;
            bottom.push_back(temp);
        }
        
        if(m==1){
            cout << 0 << endl;
        }else{
            
            int min_val = INT_MAX;
            
            for(int i = 0; i < m;i++){
                int top_cost = sum_of_array - pref[i];
                int bottom_cost = suff[i];
                
                min_val = min(min_val, max(top_cost,bottom_cost));
            }
            
            cout << min_val << endl;
        }

    }
    return 0;
}
