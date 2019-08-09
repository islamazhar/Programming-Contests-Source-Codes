//
// Created by mazharul on 8/1/19.
//
#include <bits/stdc++.h>
using namespace std;
typedef  long long LL;
#define  MAXN 200007
char charList[] = {'R', 'G', 'B'};

LL check(LL idx, LL k, string str) {
    LL cur[] = {0,1,2};
    LL res[] = {0,0,0};
    for(int i=0;i<k;i++) {
        for(int j=0;j<3;j++) {
            if(charList[cur[j]] != str[idx+i]) res[j]++;
            cur[j] = (cur[j] + 1) % 3;
        }
    }
    LL retVal = min(res[0],res[1]);
    return min(retVal, res[2]);
}


int main(void) {
    LL q, n, k, t, res;
    string str;
    cin >> q;
    while(q--) {
        cin>> n >> k;
        cin>> str;
        res = LONG_LONG_MAX;
        for(int i=0;i<=n-k;i++) {
            t = check(i,k, str);
            res = min(t, res);
        }
        cout << res << endl;
    }
}
