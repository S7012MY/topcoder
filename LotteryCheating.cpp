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

struct LotteryCheating {
	bool trans(long long nr,string &z) {
		int ind=z.size()-1;
		for(;nr;) {
		if(-1==ind) return 0;
			z[ind]=nr%10+'0';
			--ind;
			nr/=10;
		}
		for(;ind>=0;z[ind]='0',--ind);	
		return 1;
	}
	int minimalChange(string ID) {
		int rez=99;
		long long nr=0;
		string z;
		for(int i=0; i<ID.size();++i) nr=nr*10+ID[i]-'0';
		for(int i=0; 1LL*i*i<=nr*10; ++i) {
			long long pp=1LL*i*i;
			z=ID;
			if(!trans(pp,z)) break;
			int cc=0;
			for(int i=0; i<ID.size(); ++i) if(z[i]!=ID[i]) ++cc;
			//cout<<z<<' '<<cc<<'\n';
			rez=min(rez,cc);
		}
		return rez;
	}
};


//Powered by [KawigiEdit] 2.0!
