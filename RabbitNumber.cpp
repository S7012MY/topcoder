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
#include <cmath>
#include <cstdlib>
#include <ctime>
#define x first
#define y second
using namespace std;

typedef pair<int, int> per;
typedef vector<int>::iterator it;
typedef set<int>::iterator is;

struct RabbitNumber {
	int sc(long long n) {
		int ret=0;
		for(;n;ret+=(n%10LL),n/=10LL);
		return ret;
	}
	
	int createNumber(int low, int high, int nc) {
		int nr=0;
		for(int i=0; i<4; ++i) {
			int nxt=10*nc+i;
			if(0==nxt || sc(nxt)*sc(nxt)!=sc(1LL*nxt*nxt)) continue;
			if(low<=nxt && high>=nxt) ++nr;
			if(nxt<=high/10) nr+=createNumber(low,high,nxt);
		}
		return nr;
	}
	
	int theCount(int low, int high) {
		return createNumber(low,high,0);
	}
};


//Powered by [KawigiEdit] 2.0!
