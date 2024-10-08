//
//  main.cpp
//  FindTheCar
//
//  Created by Mohan Dixit on 2024-09-25.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        int n,k,q;cin >> n >> k >> q;
        
        vector<long long> a(k);
        vector<long long> b(k);
        
        for(int i = 0; i < k;i++){
            cin >> a[i];
        }
        for(int i = 0; i < k;i++){
            cin >> b[i];
        }
        
        
        while(q--){
            long long d;cin >> d;
            
            int ind =0;
            
            if(d <= a[0]){
                //long long rate = a[0]/b[0];
                ll val = (ll) d*b[0]/a[0];
                cout << val << " ";
                continue;
            }
            
            
            int L = 1;int R = k-1;
            
            while(L <= R){
                int mid = (L+R)/2;
                
                if(a[mid] >= d && a[mid-1] <= d){
                    ind = mid;
                    break;
                }else if(a[mid] >= d){
                    R = mid-1;
                }else{
                    L = mid+1;
                }
            }
            
            long long val =(long long) (d-a[ind-1])*(b[ind]-b[ind-1])/(a[ind]-a[ind-1]);
            
            val += +b[ind-1];
            
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
