#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>
#include <string>
#include <queue>
#include <map>
#include <set>
#include <stack>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

struct DivideByZero {
int CountNumbers(vector <int> numbers) {
        int ret;
        set <int> mySet;
        set <int> :: iterator it1,it2,it3;
        
        while(!numbers.empty()){
			for(int i=0;i<(int)numbers.size();i++){
				mySet.insert(i);
			}
			
			numbers.clear();
			
			for(it1 = mySet.begin(); it1!=mySet.end();it1++){
				for(it2=mySet.begin();it2 !=mySet.end();it2++){
					int div = max(*it1,*it2)/min(*it1,*it2);
					it3  = mySet.find(div);
					if (it3 == mySet.end()){
						number.push_back(*it3);
					}
				}
			}
		}
        return ret ;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {9, 2}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 3; verify_case(0, Arg1, CountNumbers(Arg0)); }
	void test_case_1() { int Arr0[] = {8, 2}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 3; verify_case(1, Arg1, CountNumbers(Arg0)); }
	void test_case_2() { int Arr0[] = {50}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1; verify_case(2, Arg1, CountNumbers(Arg0)); }
	void test_case_3() { int Arr0[] = {1, 5, 8, 30, 15, 4}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 11; verify_case(3, Arg1, CountNumbers(Arg0)); }
	void test_case_4() { int Arr0[] = {1, 2, 4, 8, 16, 32, 64}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 7; verify_case(4, Arg1, CountNumbers(Arg0)); }
	void test_case_5() { int Arr0[] = {6, 2, 18}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 7; verify_case(5, Arg1, CountNumbers(Arg0)); }

// END CUT HERE

} ;
int main(void) {
  DivideByZero __test;
  __test.run_test(-1);
   return 0;	
}
