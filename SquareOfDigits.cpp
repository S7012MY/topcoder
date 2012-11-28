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

struct SquareOfDigits {
	int getMax(vector <string> d) {
		int rez=0,n=d.size(),m=d[0].size();
		char c;
		for(int i=0; i<n; ++i) for(int j=0; j<m; ++j)
			for(int k=i; k<n; ++k) for(int l=j; l<m; ++l)
				if(d[i][j]==d[k][l] && d[i][j]==d[i][l] && d[i][j]==d[k][j] && k-i+1==l-j+1) {
					rez=max(rez,(k-i+1)*(l-j+1));
					c=d[i][j];
				}
		cout<<c;
		return rez;
	}
};


//Powered by [KawigiEdit] 2.0!
