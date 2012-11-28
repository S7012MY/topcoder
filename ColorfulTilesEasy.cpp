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

struct ColorfulTilesEasy {
	int theMin(string room) {
		int rez=0,rez2=0;
		for(int i=0; i<room.size(); ++i) {
			if(room[i]==room[i-1]) ++rez,++i;
		}
		return rez;
	}
};


//Powered by [KawigiEdit] 2.0!
