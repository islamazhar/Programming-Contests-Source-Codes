//
// Created by mazharul on 8/2/19.
//

#include <bits/stdc++.h>
using namespace std;
typedef  long long LL;
#define  MAXN 200007
int main(void) {
    double H,L;
    cin >> H >> L ;
    double lo = 0, hi = DBL_MAX, mid;
    for(int i=0;i<1000;i++) {
        mid = (lo + hi)/2.0;
        if( (H+mid)*(H+mid) > mid*mid + L*L) {
            hi = mid;
        }
        else {
            lo = mid;
        }
    }
    printf("%0.11lf\n",lo+1e-20);

}