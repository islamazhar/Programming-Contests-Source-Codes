//
// Created by Mazharul Islam on 2019-06-02.
//

#include <iostream>
using namespace std;
#define MAXN 1000000
#define  LL long long
LL arr1[MAXN], arr2[MAXN];
int main(void) {
    int n,testcases;
    cin >> testcases;
    while(testcases--)
    {
        cin >> n;
        int total = 0;
        for(int i=0;i<n;i++) {
            cin >> arr1[i];
            total +=arr1[i];
        }
        for(int i=0;i<n;i++) {
            cin >> arr2[i];
        }
        int j = n-1;
        int res = total;
        while(j>=0) {
            total -=arr1[j];
            total +=arr2[j];
            j--;
            res = max(res, total);
        }
        cout << res << endl;
    }
}