#include <vector>
#include <list>
#include <map>
#include <set>
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

struct AmoebaDivTwo {
	int count(vector <string> table, int k) {
		int rez=0,n=table.size(),m=table[0].size();
		if(k>1)
		for(int i=0; i<n; ++i) for(int j=0; j<m; ++j) {
			int add1=1,add2=1;
			for(int l=0; l<k && i+l<n; ++l) if('M'==table[i+l][j]) add1=0;
			for(int l=0; l<k && j+l<m; ++l) if('M'==table[i][j+l]) add2=0;
			if(i+k>n) add1=0;//,cout<<i<<' '<<j<<'\n';
			if(j+k>m) add2=0;//,cout<<i<<' '<<j<<'\n';
			//cout<<i<<' '<<j<<' '<<add1<<' '<<add2<<'\n';
			rez+=add1+add2;
		}
		else {
			 for(int i=0; i<n; ++i) for(int j=0; j<m; ++j) if('A'==table[i][j]) ++rez;
		}
		return rez;
	}
};


//Powered by [KawigiEdit] 2.0!
