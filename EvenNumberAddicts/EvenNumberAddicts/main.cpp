//
//  main.cpp
//  EvenNumberAddicts
//
//  Created by Mohan Dixit on 2024-03-23.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int N;
    cin >> N;
    
    while(N--){
        int n;
            cin >> n;
            int a = 0, b = 0;
            for (int i = 0; i < n; ++i){
                int x;
                cin >> x;
                if (x % 2 == 0)
                    a += 1;
                else
                    b += 1;
            }
        
        if (b % 4 == 2)
                cout << "Bob" << endl;
            else if (b % 4 == 3)
                cout << "Alice" << endl;
            else if (b % 4 == 0)
                cout << "Alice" << endl;
            else if (a % 2 == 1)
                cout << "Alice" << endl;
            else
                cout << "Bob" << endl;
    }
    return 0;
}
