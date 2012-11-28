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

struct MinskyMysteryDiv2 {
	long long computeAnswer(long long N) {
		if(N==0 || N==1) return -1;
		for(int i=2; i*1LL*i<=N; ++i) if(0==N%i) {
			if(N&1) return N/2LL+1LL;
			else return N/2LL+2LL;
		}
		return N+1LL;
	}
};

//Powered by [KawigiEdit] 2.0!
