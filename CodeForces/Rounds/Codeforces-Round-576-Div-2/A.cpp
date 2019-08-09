//
// Created by mazharul on 8/2/19.
//
#include <bits/stdc++.h>
using namespace std;
typedef  long long LL;
#define  MAXN 200007
LL arr[MAXN];
int main(void) {
    LL n, x, y;
    cin >> n >> x >> y;
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    for(LL i=0;i<n;i++) {
        bool f = true;
        for(int j = max(0LL,i-x);j<=min(n-1,i+y);j++) {
            if(arr[i] > arr[j] && i!=j) f = false;
        }
        if(f) {
            cout << i  + 1 << endl;
            break;
        }
    }
    return 0;
}
