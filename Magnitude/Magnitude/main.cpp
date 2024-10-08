//
//  main.cpp
//  Magnitude
//
//  Created by Mohan Dixit on 2024-07-08.
//

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// Easy Version:




//int main(int argc, const char * argv[]) {
//    // insert code here...
//    
//    int a;
//    cin >> a;
//    
//    while(a--){
//        int N;
//        cin >> N;
//        long long curr = 0;
//        
//        vector<int> nums(N);
//        
//        long long sum = 0;
//        long long min_sum = LONG_LONG_MAX;
//        long long final_val = 0;
//        
//        for(int i = 0; i < N;i++){
//            cin >> nums[i];
//            
//            sum += nums[i];
//            min_sum = min(min_sum, sum);
//        }
//        
//
//        if(min_sum < 0){
//            cout << sum - 2*min_sum << endl;
//        }else{
//            cout << sum << endl;
//        }
//    }
//}

ll NCR(ll n, ll r)
{
    if (r == 0) return 1;

    /*
     Extra computation saving for large R,
     using property:
     N choose R = N choose (N-R)
    */
    if (r > n / 2) return NCR(n, n - r);

    ll res = 1;

    for (ll k = 1; k <= r; ++k)
    {
        res *= n - k + 1;
        res /= k;
    }

    return res;
}

// Hard Version:


int main(int argc, const char * argv[]) {
    // insert code here...
    
    int a;
    cin >> a;
    
    while(a--){
        int N;
        cin >> N;
        long long curr = 0;
        
        vector<int> nums(N);
        
        long long sum = 0;
        long long min_sum = LONG_LONG_MAX;
        long long final_val = 0;
        
        long long possible_absolutes = 1;
        long long pos_nums = 0;
        
        for(int i = 0; i < N;i++){
            cin >> nums[i];
            
            sum += nums[i];
            
            if(nums[i] > 0){
                pos_nums ++;
            }
            
            if(sum == min_sum){
                possible_absolutes++;
            }
            min_sum = min(min_sum, sum);
        }
        
        ll total= 1;
        ll num_chances = 1;
        
        for(int i = 1; i < possible_absolutes;i++){
            num_chances += NCR(possible_absolutes, i)%998244353;
        }
        
        total *= num_chances%998244353;
        
        for(int i = 0;i < pos_nums;i++){
            total *= 2;
            total = total%998244353;
        }
        

        cout << total << endl;
    }
}
