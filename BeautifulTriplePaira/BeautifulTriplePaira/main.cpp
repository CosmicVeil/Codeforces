//
//  main.cpp
//  BeautifulTriplePaira
//
//  Created by Mohan Dixit on 2024-08-22.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t; cin >> t;
    
    while(t--){
        int N;cin >> N;
        
        vector<int> nums(N);
        map<vector<int>, int> triples;
        ll ans = 0;
        
        for(int i = 0; i < N;i++){
            cin >> nums[i];
        }
        
        for(int i = 0;i < N-2;i++){
            vector<int> triple = {nums[i],nums[i+1],nums[i+2]};
            
            vector<vector<int>> poss = {{0,nums[i+1],nums[i+2]}, {nums[i],0,nums[i+2]}, {nums[i],nums[i+1],0}};
            
            for(int i = 0; i < 3;i++){
                ans += triples[poss[i]] - triples[triple];
                if(triples.count(poss[i])){
                    triples[poss[i]]++;
                }else{
                    triples[poss[i]] = 1;
                }
            }
            if(triples.count(triple)){
                triples[triple]++;
            }else{
                triples[triple] = 1;
            }
        }
        
        cout << ans << endl;
    }
    return 0;
}
