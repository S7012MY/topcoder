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

int mins[105];
long long dp[105][30];

struct WeirdTimes {
	vector <int> hourValues(vector <int> v, int kk) {
		vector <int> rez,w;
		int n=v.size();
		w.push_back(-1);
		for(int i=1; i<n; ++i)
			if(v[i]>v[i-1]) mins[i]=mins[i-1];
			else mins[i]=mins[i-1]+1;
		if(mins[n-1]>23) return w;
		
		for(int i=mins[n-1]; i<=23; ++i) dp[n-1][i]=1;
		for(int i=n-1; i>=0; --i) for(int j=mins[i]; j<=23; ++j) {
			int d=(v[i+1]>v[i]?0:1);
			for(int k=j+d; k<=23; ++k) dp[i][j]+=dp[i+1][k];
		}
		
		long long cnt=0,K=kk;
		for(int i=0; i<n; ++i) {
			int j=mins[i];
			if(i) {
				int d=(v[i]>v[i-1]?0:1);
				j=rez[i-1]+d;
			}
			for(;j<=23; ++j) {
				cnt+=dp[i][j];
				if(cnt>=K) break;
			}
			if(cnt<K) return w;
			cnt-=dp[i][j];
			rez.push_back(j);
		}
		return rez;
	}
};


//Powered by [KawigiEdit] 2.0!
