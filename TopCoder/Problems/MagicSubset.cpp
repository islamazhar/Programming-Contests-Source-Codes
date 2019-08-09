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

struct MagicSubset {
int findBest ( vector <int> values ) 
{
    //int ret;
    int N = values.size();
	int sum1 = 0, sum2 = -values[0];
	
	for(int i=1;i<N;i++){
		if(values[i]>0) sum1+=values[i];
		else{
			sum2 -= values[i];
		}
	}
	
	
		 
    return max(sum1,sum2);
}
 
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {1,10,4,-6,3}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 17; verify_case(0, Arg1, findBest(Arg0)); }
	void test_case_1() { int Arr0[] = {3,-5,1,-6}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 8; verify_case(1, Arg1, findBest(Arg0)); }
	void test_case_2() { int Arr0[] = {0,0,0,0,0,0,0,0,0}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 0; verify_case(2, Arg1, findBest(Arg0)); }
	void test_case_3() { int Arr0[] = {-100}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 100; verify_case(3, Arg1, findBest(Arg0)); }
	void test_case_4() { int Arr0[] = {100}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 0; verify_case(4, Arg1, findBest(Arg0)); }
	void test_case_5() { int Arr0[] = {-3,1,-4,1,5,-9,2,6,-5,3,5}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 23; verify_case(5, Arg1, findBest(Arg0)); }

// END CUT HERE

} ;

// BEGIN CUT HERE
int main(void)
{
   MagicSubset __test;
   __test.run_test(-1);
   return 0;	
}
//END CUT  HERE
