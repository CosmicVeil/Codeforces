//
//  main.cpp
//  RectangleFilling
//
//  Created by Mohan Dixit on 2024-05-24.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int N;
    cin >> N;
    
    while(N--){
        int a, b;
        cin >> a >> b;
        
        if(a==1 && b==1){
            cout << "YES" << endl;
        }else if(a == 1){
            string s;
            cin >> s;
            
            if(s[0] == s[1]){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }else if(b==1){
            char first;
            char last;
            for(int i = 0; i < a;i++){
                if(i==0){
                    cin >> first;
                }else if(i==a-1){
                    cin >> last;
                }else{
                    char temp;
                    cin >> temp;
                }
            }
            
            if(last == first){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
            
        }else{
            vector<string> s;
            s.resize(a);
            
            for(int i = 0; i < a;i++){
                for(int j = 0; j < b;j++){
                    char c;
                    cin >> c;
                    
                    s[i] += c;
                }
            }
            
            if(s[0][0] == s[a-1][b-1] || s[a-1][0] == s[0][b-1]){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
                
        }
    }
    return 0;
}
