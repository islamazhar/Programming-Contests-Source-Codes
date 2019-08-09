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

struct SquareMaking {
int getMinimalPrice ( int a, int b, int c, int d ) 
{
         int ret = 100000000 ;
		 ret = min(ret,abs(a-a)+abs(a-b)+abs(a-c)+abs(a-d));
		 ret = min(ret,abs(b-a)+abs(b-b)+abs(b-c)+abs(b-d));
		 ret = min(ret,abs(c-a)+abs(c-b)+abs(c-c)+abs(c-d));
		 ret = min(ret,abs(d-a)+abs(d-b)+abs(d-c)+abs(d-d));
         return ret;
}
 
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 5; int Arg1 = 6; int Arg2 = 5; int Arg3 = 5; int Arg4 = 1; verify_case(0, Arg4, getMinimalPrice(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_1() { int Arg0 = 4; int Arg1 = 1; int Arg2 = 5; int Arg3 = 4; int Arg4 = 4; verify_case(1, Arg4, getMinimalPrice(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_2() { int Arg0 = 2017; int Arg1 = 2017; int Arg2 = 2017; int Arg3 = 2017; int Arg4 = 0; verify_case(2, Arg4, getMinimalPrice(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_3() { int Arg0 = 705451; int Arg1 = 751563; int Arg2 = 608515; int Arg3 = 994713; int Arg4 = 432310; verify_case(3, Arg4, getMinimalPrice(Arg0, Arg1, Arg2, Arg3)); }

// END CUT HERE

} ;

// BEGIN CUT HERE
int main(void)
{
   SquareMaking __test;
   __test.run_test(-1);
   return 0;	
}
//END CUT  HERE
