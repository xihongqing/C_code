#include <cstdio>
#include <map>
using namespace std;
inline int read ();
int n,q; 
map <pair <int,int>,int> p;
int main ()
{
	n = read ();q = read ();
	while (q--)
	{
		int ty = read ();
		if (ty == 1) p[make_pair(read (),read ())] = read ();
		else printf ("%d\n",p[make_pair(read (),read ())]);
	}
	return 0;
}
inline int read ()
{
    int s = 0;int f = 1;
    char ch = getchar ();
    while ((ch < '0' || ch > '9') && ch != EOF)
	{
        if (ch == '-') f = -1;
        ch = getchar ();
    }
    while (ch >= '0' && ch <= '9')
	{
        s = s * 10 + ch - '0';
        ch = getchar ();
    }
    return s * f;
}