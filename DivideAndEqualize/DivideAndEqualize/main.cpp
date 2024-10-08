//
//  main.cpp
//  DivideAndEqualize
//
//  Created by Mohan Dixit on 2024-07-15.
//

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

map<int,int> factors;


// Update code so it updates factors map
void primeFactors(int n)
{
    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n = n/2;
        
    }
 
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n = n/i;
        }
    }
 
    if (n > 2)
        cout << n << " ";
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int N;cin >> N;
    
    while(N--){
        int a;
        cin >> a;
        
        vector<int> vals(a);
        
        ll prod = 1;
        
        for(int i = 0; i < a;i++){
            cin >> vals[i];
            prod *= vals[i];
        }
        
        double root = pow(prod, (1/(double)a));

        root = roundf(root * 1000000) / 1000000;

        
        if(roundf(root) == root){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
