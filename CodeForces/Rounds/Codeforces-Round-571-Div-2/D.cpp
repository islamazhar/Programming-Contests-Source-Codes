#include <bits/stdc++.h>
using namespace std;
double arr[100000+7];
int res[100000+7];
int main(void) {
   int n;
   double val;
   scanf("%d",&n);
   for(int i=0;i<n;i++) {
      scanf("%lf",&arr[i]);
   }
   sort(arr,arr+n);
   int total = 0;
   for(int i=0;i<n;i++) {
      int l = floor(arr[i]);
      int u = ceil(arr[i]);
      if(l == u) {
        // res[i] = l;
        //printf("%d\n",l);
         total +=l;
      }
   }
   //cout << total << endl;
   for(int i=0;i<n;i++) {
      int l = floor(arr[i]);
      int u = ceil(arr[i]);
      cout << l << " " << u <<endl;
      if(l == u) {
         printf("%d\n",l);
      } else {
         if(total > 0) {
            //res[i] = l;
            printf("%d\n",l);
            total +=l;
         }
         else {
            printf("%d\n",u);
            total +=u;
            //res[i] = u;
         }
      }
   }
   //for(int i=0;i<n;i++) {
     // printf("%d\n",res[i]);
   //}
   return 0;   
}
