#include <bits/stdc++.h>
using namespace std;

struct RepeatString{
int minimalModify(string s)
{
    int ret;
    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "aba"; int Arg1 = 1; verify_case(0, Arg1, minimalModify(Arg0)); }
	void test_case_1() { string Arg0 = "adam"; int Arg1 = 1; verify_case(1, Arg1, minimalModify(Arg0)); }
	void test_case_2() { string Arg0 = "x"; int Arg1 = 1; verify_case(2, Arg1, minimalModify(Arg0)); }
	void test_case_3() { string Arg0 = "aaabbbaaaccc"; int Arg1 = 3; verify_case(3, Arg1, minimalModify(Arg0)); }
	void test_case_4() { string Arg0 = "repeatstring"; int Arg1 = 6; verify_case(4, Arg1, minimalModify(Arg0)); }
	void test_case_5() { string Arg0 = "aaaaaaaaaaaaaaaaaaaa"; int Arg1 = 0; verify_case(5, Arg1, minimalModify(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
RepeatString ___test;
___test.run_test(-1);
return 0;
}
// END CUT HERE
