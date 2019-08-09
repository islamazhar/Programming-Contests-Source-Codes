//
// Created by mazharul on 8/1/19.
//

#include <bits/stdc++.h>
using namespace std;
typedef  long long LL;
int main(void) {
    LL a[3], t, q;
    cin>> q;
    while(q--) {
        LL res = LONG_LONG_MIN;
        for (int i = 0; i < 3; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < 3; k++) {
                    if (i == j || j == k || k == i) continue;
                    LL d = abs(a[i] - a[j]);
                    if (d < a[k]) {
                        a[k] -= d;
                        t = a[k] / 2 + max(a[i], a[j]);
                    } else {
                        t = min(a[i] + a[k], a[j] + a[k]);
                    }
                    res = max(res, t);
                }
            }
        }
        cout << res << endl;
    }
}