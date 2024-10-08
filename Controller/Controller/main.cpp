//
//  main.cpp
//  Controller
//
//  Created by Mohan Dixit on 2024-09-11.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int n;cin >> n;
    
    string s;cin >> s;
    
    int num_pos = 0;
    int num_neg = 0;
    
    for(auto c: s){
        if(c=='+'){
            num_pos++;
        }else{
            num_neg++;
        }
    }
    
    int q;cin >> q;
    
    while(q--){
        int a,b;cin >> a >> b;
        
        int max_val = max(a,b);
        int min_val = min(a,b);
        

        
        bool works = false;
        
        for(int i = 0; i <= num_pos;i++){
            
            int sum = max_val*i + (num_pos - i)*min_val;
            
            int L1 = 0; int R1 = num_neg;
            int sum2;
            
            while(L1 <= R1){
                int mid1 = (L1+R1)/2;
                
                sum2 = mid1*max_val + (num_neg-mid1)*min_val;
                
                if(sum==sum2){
                    works = true;
                    break;
                }
                
                if(sum2 > sum){
                    R1 = mid1-1;
                }else{
                    L1 = mid1+1;
                }
                
            }
            
            if(works){
                break;
            }

        }
        if(works){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    
    
    return 0;
}
