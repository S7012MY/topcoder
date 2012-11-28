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

bool mut[55];int n;

struct OrderedNim {
	string winner(vector <int> layout) {
		n=layout.size();
		for(int i=n-1; i>=0; --i) 
			if(layout[i]==1) mut[i]=!mut[i+1];
			else mut[i]=1;
		if(mut[0]) return "Alice";
		return "Bob";
	}
};


//Powered by [KawigiEdit] 2.0!
