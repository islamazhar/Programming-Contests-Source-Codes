//
// Created by mazharul on 7/21/19.
//
#include <bits/stdc++.h>
using namespace std;
#define MAXN 1000007
typedef  long long LL;
vector<int>vec;
int main(void) {
    string s;
    cin>>s;
    LL t2 = 0 ;
    LL cnt = 0;
    for(int i=0;i<s.length();i++) {
        if(s[i] == 'v') cnt++;
        else if {
            vec.push_back(max(0,cnt-1));
            t2 +=(cnt-1);
            cnt = 0;
        }
    }
    LL t1 = 0, res = 0;
    LL n = vec.size();
    for(int i=0;i<n;i++) {
        t2 -=vec[i];
        t1 +=vec[i];
        res += ( (t1 - (i+1)) * (t2 * (n-i)));
    }
    cout << res << endl;
    return 0;
}
