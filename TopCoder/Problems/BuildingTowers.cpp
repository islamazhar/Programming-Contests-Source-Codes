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
typedef  long long int i64 ;
struct BuildingTowers {
bool ok(i64 i,i64 j,i64 Mi,i64 Mj,i64 Mk,i64 K) {
	i64 k1 = (Mk-Mi)/K;
	i64 k2 = (Mk-Mj)/K;
    cout << k1 <<"----- "<< k2 << endl ;
	if(k1+k2<=(j-i)){
		return true;
	}
	return false;
}


long long maxHeight ( int N, int K, vector <int> x, vector <int> t ) {
         i64 ret=0;
		 i64 sz = x.size();
		 for(int i=0;i<sz;i++){
				i64 I,J,MI,MJ ;
				if( i == 0 ){
						I=0;
						MI=0;
						J = x[i];
						MJ = min(t[i],K);
				}
				else if(i == sz-1) {
						I = x[i];
						MI = t[i];
						J = N;
						MJ = (N-I)*K+MI ;
				}
				else {
						I = x[i];
						MI = t[i];
						J = x[i+1];
						MJ = t[i+1];
				}
			//	/*
				// DO  BS Now
				i64 lo= 0;
				i64 hi = 100000000000;
				i64 mid;
				while(lo<hi){
					//cout << lo << " "<< hi <<endl ;
					mid = lo + (hi-lo)/2;
					if(ok(I,J,MI,MJ,mid,K)){
				//		cout << "here1" << endl ;
						lo = mid;
					}
					else{
					//	cout << "here" <<endl ;
						hi = mid+1;
					}
				}

				ret = max(ret,lo);
	//	 */
		 }
		 for(int i=0;i<10;i++){
			 cout << "Hello world" << endl ;
		 }
         return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const long long &Expected, const long long &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 10; int Arg1 = 1; int Arr2[] = {3,8}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arr3[] = {1,1}; vector <int> Arg3(Arr3, Arr3 + (sizeof(Arr3) / sizeof(Arr3[0]))); long long Arg4 = 3LL; verify_case(0, Arg4, maxHeight(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_1() { int Arg0 = 1000000000; int Arg1 = 1000000000; int Arr2[] = {}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arr3[] = {}; vector <int> Arg3(Arr3, Arr3 + (sizeof(Arr3) / sizeof(Arr3[0]))); long long Arg4 = 999999999000000000LL; verify_case(1, Arg4, maxHeight(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_2() { int Arg0 = 20; int Arg1 = 3; int Arr2[] = {4,7,13,15,18}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arr3[] = {8,22,1,55,42}; vector <int> Arg3(Arr3, Arr3 + (sizeof(Arr3) / sizeof(Arr3[0]))); long long Arg4 = 22LL; verify_case(2, Arg4, maxHeight(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_3() { int Arg0 = 780; int Arg1 = 547990606; int Arr2[] = {34,35,48,86,110,170,275,288,313,321,344,373,390,410,412,441,499,525,538,568,585,627,630,671,692,699,719,752,755,764,772}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arr3[] = {89,81,88,42,55,92,19,91,71,42,72,18,86,89,88,75,29,98,63,74,45,11,68,34,94,20,69,33,50,69,54}; vector <int> Arg3(Arr3, Arr3 + (sizeof(Arr3) / sizeof(Arr3[0]))); long long Arg4 = 28495511604LL; verify_case(3, Arg4, maxHeight(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_4() { int Arg0 = 7824078; int Arg1 = 2374; int Arr2[] = {134668,488112,558756,590300,787884,868112,1550116,1681439,1790994,
1796091,1906637,2005485,2152813,2171716,2255697,2332732,2516853,
2749024,2922558,2930163,3568190,3882735,4264888,5080550,5167938,
5249191,5574341,5866912,5936121,6142348,6164177,6176113,6434368,
6552905,6588059,6628843,6744163,6760794,6982172,7080464,7175493,
7249044}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arr3[] = {8,9,171315129,52304509,1090062,476157338,245,6,253638067,37,500,
29060,106246500,129,22402,939993108,7375,2365707,40098,10200444,
3193547,55597,24920935,905027,1374,12396141,525886,41,33,3692,
11502,180,3186,5560,778988,42449532,269666,10982579,48,3994,1,9}; vector <int> Arg3(Arr3, Arr3 + (sizeof(Arr3) / sizeof(Arr3[0]))); long long Arg4 = 1365130725LL; verify_case(4, Arg4, maxHeight(Arg0, Arg1, Arg2, Arg3)); }

// END CUT HERE

} ;

// BEGIN CUT HERE
int main(void)
{
   BuildingTowers __test;
   __test.run_test(-1);
   return 0;
}
//END CUT  HERE
