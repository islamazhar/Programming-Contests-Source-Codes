#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define MAXN 100007
Long coins[MAXN];
int main(void) {

    Long T, n, total = 0;
    cin >> T;
    while(T--) {
        total = 0;
        cin >> n;
        for(int i=0;i<n;i++) {
            cin >> coins[i];
            total += coins[i];
        }
        Long res = LONG_LONG_MAX;
        for(int i=0;i<n;i++) {
            if (n*coins[i] == total) {
                res = i+1;
                break;
            }
        }
        if(res == LONG_LONG_MAX) {
            cout << "Impossible\n";
        } else {
            cout << res << "\n";
        }
    }
    return 0;
}