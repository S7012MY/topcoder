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

struct SilverDistance {
	int minSteps(int sx, int sy, int gx, int gy) {
		int rez=0;
		if((abs(sx-gx)-abs(sy-gy))%2) ++rez,++sy;
		rez+=max(abs(sx-gx),abs(sy-gy));
		return rez;
	}
};


//Powered by [KawigiEdit] 2.0!
