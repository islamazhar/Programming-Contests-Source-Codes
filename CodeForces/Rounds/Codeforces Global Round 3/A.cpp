//
// Created by Mazharul Islam on 2019-06-02.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define MAXN 10000
#define LL long long

int main(void) {
    LL a,b,c;
    cin >> a >> b >> c;
    LL res = 2*c + 2*min(a,b);
    if(a != b) {
        res ++ ;
    }
    cout << res << endl;
    return 0;
}