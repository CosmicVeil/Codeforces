//
//  main.cpp
//  CardsPartition
//
//  Created by Mohan Dixit on 2024-09-27.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;cin >> t;
    
    while(t--){
        ll n,k;cin >> n >> k;
        
        ll sum = 0;
        ll maxCard = -1;
        
        vector<ll> cards(n);
        
        for(int i =0; i < n;i++){
            cin >> cards[i];
            
            maxCard = max(maxCard, cards[i]);
            sum += cards[i];
        }
        
        for(int i = n;i >= 0;i--){
            ll numDecks = (sum+k)/i;
            
            if(numDecks*i >= sum && numDecks >= maxCard){
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}
