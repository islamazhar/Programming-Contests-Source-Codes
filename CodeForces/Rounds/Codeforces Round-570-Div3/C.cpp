#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int main(int argc, char **argv){
   
   LL q, n, val;
   cin >> q;
   while(q--) {
      cin >> n;
      vector<LL>vec(n+1,0);
      for(int i=0;i<n;i++) {
         cin >> val;
         vec[val]++;
      }
      // sort(vec.begin(), vec.end());
      LL res =0;
      priority_queue<LL>pq;
      for(int i=1;i<=n;i++) {
         pq.push(vec[i]);
      }
      LL last = INT_MAX;
      while(!pq.empty()) {
         LL t = pq.top(); pq.pop();
         if(last <= t) {
            t = last-1;
         }
         //cout << t << "\t";
         last = t;
         res +=t;
         if(last <=1) break;      
      }
      cout << res << "\n";
   }	
	return 0;
}

