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
#include <cstring>
#define x first
#define y second
using namespace std;

typedef pair<int, int> per;
typedef vector<int>::iterator it;
typedef set<int>::iterator is;

struct Badgers {
	int feedMost(vector <int> hunger, vector <int> greed, int totalFood) {
		int rez=0,n=hunger.size();
		int nr[1000005],grd[1000005];
		memset(nr,0,sizeof(nr));
		memset(grd,0,sizeof(grd));
		for(int j=0; j<n; ++j) {
			for(int i=totalFood; 0<i; --i)
				if(nr[i]) {
					int cant=i+hunger[j]+(grd[i]+greed[j])*nr[i]-grd[i]*(nr[i]-1);
					//cout<<cant<<'\n';
					if((!nr[cant] || nr[cant]>nr[i]+1) && cant<=totalFood) {
						nr[cant]=nr[i]+1;
						grd[cant]=grd[i]+greed[j];
						//cout<<cant<<' '<<grd[cant]<<'\n';
					}
					else if(cant<=totalFood && nr[cant]==nr[i]+1 && grd[cant]>grd[i]+greed[j]) grd[cant]=grd[i]+greed[j];
				}
			nr[hunger[j]]=1;
			grd[hunger[j]]=greed[j];
		}
		for(int i=0; i<=totalFood; ++i) {
			rez=max(rez,nr[i]);
			//cout<<i<<' '<<nr[i]<<' '<<grd[i]<<'\n';
		}
		return rez;
	}
};


//Powered by [KawigiEdit] 2.0!
