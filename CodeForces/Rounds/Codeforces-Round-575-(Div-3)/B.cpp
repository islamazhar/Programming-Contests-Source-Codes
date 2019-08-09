//
// Created by mazharul on 8/1/19.
//

#include <bits/stdc++.h>
using namespace std;
typedef  long long LL;
#define  MAXN 200007
LL arr[MAXN];
int main(void) {
    LL n, q, k, t ;
    cin >> q;
    while(q--) {
        t = 0 ;
        cin >> n >> k;
        for(int i=0;i<n;i++) {
            cin >> arr[i];
            if(arr[i] % 2 == 1) {
                t++;
            }
        }
        if(t<k) {
            cout << "NO\n";
        }
        else if( (t-k) % 2 == 1) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
            t = 0 ;
            for(int i=0;i<n;i++) {
                if(arr[i] % 2 == 1 && t<k-1) {
                    cout << (i+1) << " ";
                    t++;
                }
            }
            cout << n << "\n";
        }
    }
}