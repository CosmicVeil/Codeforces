//  Created by zFa3 + ZZ-
//  Written in C++

// this one slightly faster for some reason

// all the include statements that bits/stdc++.h uses
#include <bits/stdc++.h>
using namespace std;

bool check(int student_index, vector<int> teachers, int checking_index){
    if (teachers[checking_index] > student_index and teachers[checking_index - 1] < student_index){
        return true;
    }
    return false;
}

void solution(){

    int d, e, f;
    cin >> d >> e >> f;
    vector<int> teachers(e);
    for(int j = 0; j < e; j++){
        cin >> teachers[j];
    }
    sort(teachers.begin(), teachers.end());
    int student_location;
    while(f--){
        cin >> student_location;
        if (student_location < teachers[0]){
            cout << teachers[0] - 1 << "\n";
        } else if(student_location > teachers[teachers.size()-1]){
            cout << d - teachers[teachers.size() - 1] << "\n";
        } else {
            int p1 = 0;
            int p2 = e - 1;
            while (p1 <= p2){
                int center = (p1 + p2) / 2;
                if (check(student_location, teachers, center)){
                    cout << (teachers[center] - teachers[center - 1]) / 2 << "\n";
                    break;
                } else if (teachers[center] < student_location) {
                    p1 = center + 1;
                } else {
                    p2 = center - 1;
                }
            }

        }

    }

}


int main(){
    int t;
    cin >> t;

    while(t--){
        solution();
    }
}
