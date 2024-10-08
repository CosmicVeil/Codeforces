//
//  main.cpp
//  LeftAndRightHouses
//
//  Created by Mohan Dixit on 2024-05-30.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int N;
    cin >> N;
    
    while(N--){
        int a;
        cin >> a;
        
        double l0 = 0;
        double l1 = 0;
        double r1 = 0;
        double r0 = 0;
        
        string nums;
        
        for(int i = 0; i < a;i++){
            char c;
            cin >> c;
            
            if(c =='1'){
                r1++;
            }else{
                r0++;
            }
            nums+=c;
        }
        
        int ans = a;
        
        for(int i = 0; i < a;i++){
            
            if(i==0 && r1/(r0+r1) >= 0.5){
                ans = 0;
                break;
            }
            if(l0/(l0+l1) >= 0.5 && r1/(r0+r1) >= 0.5){
                ans = i+1;
                break;
            }
            
            if(nums[i] == '1'){
                l1++;
                r1--;
            }else{
                l0++;
                l0--;
            }
        }
        
        cout << ans << endl;
    }
    return 0;
}
