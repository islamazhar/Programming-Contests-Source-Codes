#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

const int maxn = 100000 + 5;

int n;
char s[ maxn ];


int main()
{
    int t; scanf("%d\n", &t);
    while ( t-- )
	{
        gets( s ); n = strlen( s );
        int answer = 1;
        for ( int i = 0; i < n; i++ ) if ( s[i] != s[ n - i - 1 ] ) answer = 2;
        printf("%d\n", answer);
    }
	return 0; 
}
