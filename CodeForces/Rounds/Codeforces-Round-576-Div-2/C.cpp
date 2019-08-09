//
// Created by mazharul on 8/2/19.
//
#include <bits/stdc++.h>
using namespace std;
typedef  long long Long;
#define  MAXN 400007
Long arr[MAXN];

int main(void) {
    Long N,I, val;
    cin >> N >> I;
    for(int i=0;i<N;i++) {
        cin >> arr[i];
    }
    sort(arr, arr+N);
    arr[N] = arr[N-1];

    Long K = (8*I)/N;
    Long k = 1;
    while(K-- && k < N) {
        k*=2;
    }
    Long l=0,h;
    Long cnt = 1;
    Long res = LONG_LONG_MAX;
    // cout << k << endl;
    for(h=1;h<=N;h++) {
        while(cnt > k && l<N-1){
            if(arr[l] !=arr[l+1]) cnt--;
            l++;
        }
        res = min(res, N-(h-l));
        // cout << cnt << " " << l << "  " << h-1 << endl;
        if(arr[h] != arr[h-1]) {
            cnt++;
        }
    }
    cout << res << "\n";

}
