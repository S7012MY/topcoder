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

struct MovieSeating {
	long long arj(int n, int k) {
		if(k>n) return 0;
		int r=1;
		for(int i=n; i>=n-k+1; --i) r*=1LL*i;
		return r;
	}
	long long getSeatings(int numFriends, vector <string> hall) {
		long long rez=0;
		int n=hall.size(),m=hall[0].size();
		for(int i=0; i<n; ++i) {
			int nrl=0;
			for(int j=0; j<m; ++j) if('.'==hall[i][j]) ++nrl;
			rez+=arj(nrl,numFriends);
		}
		for(int j=0; j<m; ++j) {
			int nrl=0;
			for(int i=0; i<n; ++i) if('.'==hall[i][j]) ++nrl;
			rez+=arj(nrl,numFriends);
		}
		return rez>1?rez:rez/2;
	}
};


//Powered by [KawigiEdit] 2.0!
