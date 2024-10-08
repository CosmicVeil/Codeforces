//
//  main.cpp
//  AddDivideAndFloor
//
//  Created by Mohan Dixit on 2024-10-01.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        int n;cin >> n;
        
        int maxVal = 0;
        int minVal = INT_MAX;
        
        for(int i =0;i < n;i++){
            int temp;cin >> temp;
            
            maxVal = max(maxVal, temp);
            minVal = min(minVal, temp);
            

        }
        
            
        if(maxVal != minVal){
            
            vector<int> prints;
            
            while(maxVal > minVal){
                if(maxVal%2){
                    prints.push_back(0);
                    maxVal = maxVal/2;
                    minVal = minVal/2;
                }else{
                    prints.push_back(1);
                    maxVal = (maxVal+1)/2;
                    minVal = (minVal+1)/2;
                }
            }
            
            cout << prints.size() << endl;
            
            if(prints.size() <= n){
                for(auto &val : prints){
                    cout << val << " ";
                }
            }
        }else{
            cout << 0;
        }
        cout << endl;
    }
    return 0;
}
