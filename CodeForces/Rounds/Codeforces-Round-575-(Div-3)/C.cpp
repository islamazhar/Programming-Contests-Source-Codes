//
// Created by mazharul on 8/1/19.
//
#include <bits/stdc++.h>
using namespace std;
typedef  long long LL;
#define  MAXN 200007
int main(void) {
    LL q, n,xh,xl,yh,yl,xi,yi,xlow,ylow,yhigh,xhigh;
    cin >> q;
    while(q--) {
        xh = yh = 100000;
        xl = yl = -100000;
        cin >> n;
        for(int i=0;i<n;i++) {
            cin>> xi >> yi >> xlow >> yhigh >> xhigh >> ylow;
            if(xlow == 0) {
                xl = max(xl, xi);
            }
            if(ylow == 0) {
                yl = max(yl, yi);
            }
            if(xhigh == 0) {
                xh = min(xh, xi);
            }
            if(yhigh == 0) {
                yh = min(yh, yi);
            }
        }
        if(xl<=xh && yl <=yh) {
            cout << "1 " << xl << " " << yl << endl;
        }
        else {
            cout << "0\n";
        }
    }
}
