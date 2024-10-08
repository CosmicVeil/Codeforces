//
//  main.cpp
//  HeavyIntervals
//
//  Created by Mohan Dixit on 2024-10-03.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        int n;cin >> n;
        
        set<long long> l;
        vector<long long> r(n);
        vector<long long> c(n);
        
        for(int i =0;i<n;i++){
            int temp;cin >> temp;
            l.emplace(temp);
        }
        
        for(int i =0;i<n;i++){
            cin >> r[i];
        }

        
        for(int i =0;i<n;i++){
            cin >> c[i];
        }
        //sort(l.begin(), l.end());
        sort(r.begin(), r.end());
        sort(c.begin(), c.end());
        
        vector<long long> diffs;
        
        long long minCost = 0;
        
        for(int i = 0; i < n;i++){
            auto val = prev(l.lower_bound(r[i]));
            diffs.push_back(r[i]-*val);
            
            l.erase(val);
        }
        
        sort(diffs.begin(), diffs.end());
        
        for(int i = 0; i < n;i++){
            minCost += diffs[i]*c[n-i-1];
        }
        
        cout << minCost << endl;

    }
    return 0;
}
