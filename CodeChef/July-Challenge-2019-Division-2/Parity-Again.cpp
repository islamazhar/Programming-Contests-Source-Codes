//
// Created by mazharul on 8/8/19.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define MAXN 100007
Long arr[MAXN], num;

int main(void) {
    Long Q, res, T;
    cin >> T;
    while(T--) {
        cin >> Q;
        set<Long> mySet;
        res = 0;
        while(Q--) {
            cin >> num;
            auto it = mySet.find(num);
            if (it == mySet.end()) {
                vector<Long>vec;
                vec.push_back(num);
                for(auto x: mySet) {
                    vec.push_back(x^num);
                    // cout << num << endl;
                }
                for(auto x: vec) {
                    if( __builtin_popcount(x) % 2 == 1) res++;
                    mySet.insert(x);
                }
            }
            cout << (Long)mySet.size()-res << " " << res <<"\n";
        }
    }

    return 0;
}