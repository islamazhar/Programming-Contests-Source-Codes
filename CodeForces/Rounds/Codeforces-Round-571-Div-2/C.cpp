#include <bits/stdc++.h>
using namespace std;
int main(void) {
   string a,b;
   cin >> a >> b;
   int lenB = b.length();
   int lenA = a.length();
   int p1 = 0 ,p2 = 0 ;
   int res = 0;
   for(int i=0;i<lenA;i++) {
      if(i<lenB-1) {
         if(a[i] == '1') p1 = !p1;
         if(b[i] == '1') p2 = !p2;
      }
      else {
         if(i == lenB-1 && b[i] == '1') p2 = !p2;
         if(a[i-lenB]=='1') p1 = !p1;
         if(a[i]=='1') p1 = !p1;
         if(p1 == p2) {
            res++;
         }
      }
   }
   printf("%d\n",res);
   
   return 0;   
}
