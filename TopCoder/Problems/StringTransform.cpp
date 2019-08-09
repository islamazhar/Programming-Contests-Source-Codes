#include <cstdio>
#include <cstring>
#include <cmath>
#include <queue>
#include <map>
#include <algorithm>
#include <stack>
#include <set>
#include <sstream>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

struct StringTransform {
string isPossible ( string s, string t ) {
         
		 int cnt1[27],cnt2[27];
		 memset(cnt1,0,sizeof(cnt1));
		 memset(cnt2,0,sizeof(cnt2));
		 
		 for(int i=0;i<s.length();i++){
			 cnt1[s[i]-'a']++;
		 }
		 for(int i=t.length()-1;i>=0;i--){
			 cnt1[s[i]-'a']--;
			 if(s[i] != t[i]){
				 if(cnt1[t[i]-'a'] == 0 ){
					 return "Impossible";
				 }
			 }
		 }
         return "Possible";
}
 
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "abc"; string Arg1 = "aba"; string Arg2 = "Possible"; verify_case(0, Arg2, isPossible(Arg0, Arg1)); }
	void test_case_1() { string Arg0 = "abc"; string Arg1 = "bbc"; string Arg2 = "Impossible"; verify_case(1, Arg2, isPossible(Arg0, Arg1)); }
	void test_case_2() { string Arg0 = "topcoder"; string Arg1 = "topcoder"; string Arg2 = "Possible"; verify_case(2, Arg2, isPossible(Arg0, Arg1)); }
	void test_case_3() { string Arg0 = "rdmcxnnbbe"; string Arg1 = "rdrrxrnxbe"; string Arg2 = "Possible"; verify_case(3, Arg2, isPossible(Arg0, Arg1)); }
	void test_case_4() { string Arg0 = "rdmcxnnbbe"; string Arg1 = "rdqrxrnxbe"; string Arg2 = "Impossible"; verify_case(4, Arg2, isPossible(Arg0, Arg1)); }

// END CUT HERE

} ;

// BEGIN CUT HERE
int main(void)
{
   StringTransform __test;
   __test.run_test(-1);
   return 0;	
}
//END CUT  HERE
