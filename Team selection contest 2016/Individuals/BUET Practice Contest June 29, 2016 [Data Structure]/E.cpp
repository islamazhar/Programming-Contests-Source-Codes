/*
 * Mazharul Islam , BUET
 * Problem Link:http://acm.hust.edu.cn/vjudge/contest/view.action?cid=120288#problem/B
 */
using namespace std;
#include <bits/stdc++.h>

#define foreach(i,n) for(__typeof((n).begin())i =(n).begin();i!=(n).end();i++)
#define rep(i,a,n) for(__typeof(n) i=a; i<(n); i++)
#define mem(x,val) memset((x),(val),sizeof(x));
#define write(x) freopen(x,"w",stdout);
#define read(x) freopen(x,"r",stdin);
#define all(x) x.begin(),x.end()
#define sz(x) ((int)x.size())
#define sqr(x) ((x)*(x))
#define pb push_back
#define mp make_pair
#define clr clear()
#define inf (1<<30)
#define ins insert
#define xx first
#define yy second
#define eps 1e-9
#define endl "\n"
typedef int i64;
typedef unsigned long long ui64;
typedef string ST;
typedef vector<i64> vi;
typedef vector<ST> vs;
typedef map<i64,i64> mii;
typedef map<ST,i64> msi;
typedef set<i64> si;
typedef set<ST> ss;
typedef pair<i64,i64> pii;
typedef vector<pii> vpii;


/// ********* debug template bt Bidhan Roy *********

template < typename F, typename S >
ostream& operator << ( ostream& os, const pair< F, S > & p ) {
    return os << "(" << p.first << ", " << p.second << ")";
}

template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v ) {
    os << "{";
    typename vector< T > :: const_iterator it;
    for( it = v.begin(); it != v.end(); it++ ) {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "}";
}

template < typename T >
ostream &operator << ( ostream & os, const set< T > &v ) {
    os << "[";
    typename set< T > :: const_iterator it;
    for ( it = v.begin(); it != v.end(); it++ ) {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "]";
}

template < typename F, typename S >
ostream &operator << ( ostream & os, const map< F, S > &v ) {
    os << "[";
    typename map< F , S >::const_iterator it;
    for( it = v.begin(); it != v.end(); it++ ) {
        if( it != v.begin() ) os << ", ";
        os << it -> first << " = " << it -> second ;
    }
    return os << "]";
}
#define deb(x) cerr << #x << " = " << x << endl;
#define MAXN 101
int arr[MAXN][4],n ;
int present(int tim){
    int ret= 0 ;
    rep(i,0,n){
        if(arr[i][0]<=tim && arr[i][1]>tim){
            ret++ ;
        }
    }
    return ret ;
}

int main(){
    read("in.txt") ;
    int TC ;
    scanf("%d",&TC) ;
    while(TC--){
        scanf("%d",&n) ;
        rep(i,0,n) scanf("%d %d",&arr[i][0],&arr[i][1]) ;
        int res=0;
        rep(i,0,n){
            res=max(res,present(arr[i][0])) ;
            res=max(res,present(arr[i][1])) ;
        }
        printf("%d\n",res) ;
    }
    return 0;
}


