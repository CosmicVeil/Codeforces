//
//  main.cpp
//  SmiloAndMonsters
//
//  Created by Mohan Dixit on 2024-08-24.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        int n; cin >> n;
        
        vector<int> hordes(n); for(int i= 0;i<n;i++){cin >> hordes[i];}
        
        int l = 0;
        int r = n-1;
        
        sort(hordes.begin(), hordes.end());
        ll combo = 0;
        ll attacks = 0;
        
        while(l<r){
            if(combo + hordes[l] > hordes[r]){
                attacks += hordes[r]-combo+1;
                hordes[l] -= hordes[r]-combo;
                combo = 0;
                r--;
                
            }else if(combo + hordes[l] == hordes[r]){
                attacks += hordes[l]+1;
                combo = 0;
                l++;
                r--;
            }else{
                attacks += hordes[l];
                combo += hordes[l];
                l++;
            }
            
        }
        if(l==r){
            
            if(hordes[l] == 1){
                attacks++;
            }else{
                if(combo >= hordes[l]){
                    attacks++;
                }else{
                    hordes[l]-=combo;
                    attacks += (hordes[l]+1)/2;
                    attacks++;
                }
            }
        }
        cout << attacks << endl;
        
        
        
        
    }
    return 0;
}
