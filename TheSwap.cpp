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

struct TheSwap {
	vector<int> nr,rnr;
	int k;
	void back(int pas) {
		if(pas==k+1) {
			if(rnr.size()==0 || nr>rnr) rnr=nr;
			return;
		}
		for(int i=0; i<nr.size(); ++i) for(int j=i+1; j<nr.size(); ++j)
			if(i!=0 || (i==0 && nr[j]!=0)) {
				swap(nr[i],nr[j]);
				if(rnr.size()==0 || nr>rnr) back(pas+1);
				swap(nr[i],nr[j]);
			}
	}
	
	int findMax(int n, int c) {
		int rez=0;
		k=c;
		for(;n;) {
			nr.push_back(n%10);
			n/=10;
		}
		reverse(nr.begin(),nr.end());
		back(1);
		if(rnr.size()==0) return -1;
		for(int i=0; i<rnr.size(); ++i) rez=rez*10+rnr[i];
		return rez;
	}
};


//Powered by [KawigiEdit] 2.0!
