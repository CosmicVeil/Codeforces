//
//  main.cpp
//  PerformOperationsToMaximizeScore
//
//  Created by Mohan Dixit on 2024-08-10.
//

#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll norm_med;
ll side_med;
vector<ll> a;
vector<ll> b;

void median(){
    vector<ll> sorted_a = a;
    sort(sorted_a.begin(), sorted_a.end());
    double size_a = (double)sorted_a.size();
    
    norm_med = sorted_a[floor(size_a/2)-1];
    
    if((int) size_a%2== 1){
        side_med =sorted_a[floor(size_a/2)];
    }else{
        side_med = sorted_a[floor(size_a/2)-2];
    }
}

int main(int argc, const char * argv[]) {
    int t;
    cin >> t;
    
    while(t--){
        a.clear();
        b.clear();
        int n,k;
        cin >> n >> k;
        
        for(int i = 0; i < n;i++){
            ll temp;cin>>temp;
            a.push_back(temp);
        }
        for(int i = 0; i < n;i++){
            ll temp;cin>>temp;
            b.push_back(temp);
        }
        
        median();
        
        ll score = 0;
        
        for(int i = 0; i < n;i++){
            bool k_used = false;
            ll round_score = 0;
            if(b[i]){
                k_used = true;
                round_score = a[i] + k;
            }else{
                round_score = a[i];
            }
            
            if(!n%2){
                if(i <= n/2){
                    if(b[n/2]&!k_used){
                        round_score += side_med+k;
                    }else{
                        round_score += side_med;
                    }
                }else{
                    if(b[n/2+1]&!k_used){
                        round_score += norm_med+k;
                    }else{
                        round_score += norm_med;
                    }
                }
            }else{
                if(i < n/2){
                    if(b[n/2]&!k_used){
                        round_score += norm_med+k;
                    }else{
                        round_score += norm_med;
                    }
                }else{
                    if(b[n/2-1]&!k_used){
                        round_score += side_med+k;
                    }else{
                        round_score += side_med;
                    }
                }
            }
            score = max(score,round_score);

        }
        cout << score << endl;
        
    }
    return 0;
}
