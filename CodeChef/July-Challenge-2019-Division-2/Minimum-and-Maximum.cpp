#include <bits/stdc++.h>
using namespace std;
typedef long long Long;

int main(void) {
    Long T, lo, hi, res,n, rem;
    string k;
    cin >> T;
    while(T--) {
        cin >> n >> k;
        rem = 0;
        for(int i=0;i<k.length();i++) {
            rem = rem*10 + (k[i]-'0');
            rem %=n;
        }
        if( rem == n-rem) {
            cout << 2*min(rem, n-rem) - 1 << endl ;
        }
        else {
            cout << 2*min(rem, n-rem) << endl;
        }
       // cout << rem << "\n";
    }
    return 0;
}