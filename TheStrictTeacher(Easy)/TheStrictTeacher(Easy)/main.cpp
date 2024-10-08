//
//  main.cpp
//  TheStrictTeacher(Easy)
//
//  Created by Mohan Dixit on 2024-09-14.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int t;cin >> t;
    
    while(t--){
        int n,m,q;
        cin >> n >> m >> q;
        
        vector<int> teachers(m);
        for(int i = 0; i < m;i++){
            cin >> teachers[i];
        }
        
        sort(teachers.begin(), teachers.end());
        
        while(q--){
            int pos;cin>> pos;
            
            int L = 0;
            int R = m-1;
            
            int perf = INT_MAX;
            int mid_perf;
            
            while(L <= R && R < teachers[m-1] && L >= 0){
                int mid = (L+R)/2;
                
                if(teachers[mid] > pos){
                    if(teachers[mid] < perf){
                        perf = teachers[mid];
                        mid_perf = mid;
                    }
                    R = mid-1;
                }else{
                    L = mid+1;
                }
            }
            
            if(perf  > teachers[m-1] && pos > teachers[m-1]){
                cout << n-teachers[m-1]<< endl;
            }else if(pos < teachers[0]){
                cout << teachers[0]-1 << endl;
            }else{
                cout << (teachers[mid_perf] + teachers[mid_perf-1])/2-  teachers[mid_perf-1]<< endl;
            }
        }
    }
    return 0;
}
