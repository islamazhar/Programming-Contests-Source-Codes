#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
map<string, LL> visited;
bool isVisidted (string s) {
   if(visited.find(s) != visited.end()) return 1;
   else {
      return 0;
   }   
}

int main(void) {
   LL n,k, siz;
   string s;
   cin >> n >> k >> s;
   
   visited[s] = 0;    
   queue<string>q;
   siz = 1;
   q.push(s);
   LL res = 0;
   while(!q.empty() && siz < k) {
      s = q.front(); q.pop();
      for(int i=0;i<s.length();i++) {
         string t = "";
         for(int j=0;j<s.length();j++) {
            if(i!=j) {
               t.push_back(s[j]);
            }
         }
         if(!isVisidted(t)) {
            visited[t] = visited[s] + 1;
            q.push(t);
            siz++;
            if(siz<=k) {
               res += visited[t];
            }
            if(siz == k) break;
         }
      }
   }
   if(siz < k) cout << "-1\n";
   else cout << res << "\n";
   return 0;   
}
