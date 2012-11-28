#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <ctime>
#define x first
#define y second
#define LL long long
using namespace std;

typedef pair<int, int> per;
typedef vector<int>::iterator it;
typedef set<int>::iterator is;

bitset<1005> m[1005];
int dx[]={-2,0,2,0},dy[]={0,-2,0,2,0},rez;

int check(int a, int b,int w, int h) {
	if(0>=a || 0>=b || a>w || b>h) return 0;
	return 1;
}

int ok(int a,int b,int w, int h) {
	if(a>w || b>h) return 0;
	for(int d=0; d<4; ++d) {
		int ii=a+dx[d],jj=b+dy[d];
		if(check(ii,jj,w,h) && m[ii][jj]) return 0;
	}
	return 1;
}

void marc(int a, int b,int w, int h) {
	m[a][b]=1;++rez;
	if(ok(a,b+1,w,h)&&!m[a][b+1]) m[a][b+1]=1,++rez;
	if(ok(a+1,b+1,w,h)&&!m[a+1][b+1]) marc(a+1,b+1,w,h);
}

struct NotTwo {
	int maxStones(int w, int h) {
		for(int i=1; i<=w;  ++i)for(int j=1; j<=h; ++j) {
			if(ok(i,j,w,h)&&!m[i][j]) marc(i,j,w,h);
		}
		for(int i=1; i<=w; ++i) for(int j=1; j<=h; ++j) if(ok(i,j,w,h) && !m[i][j]) m[i][j]=1,++rez;
		return rez;
	}
};


//Powered by [KawigiEdit] 2.0!
