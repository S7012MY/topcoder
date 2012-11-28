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

string ops[55];
int nums[55];

struct Inequalities {
	bool isop(char c) {
		if(c=='<' || c=='=' || c=='>') return 1;
		return 0;
	}
	
	int maximumSubset(vector <string> iq) {
		int rez=1;
		for(int i=0; i<iq.size(); ++i)
			for(int j=0; j<iq[i].size(); ++j)
				if(isop(iq[i][j])) ops[i]+=iq[i][j];
				else if(isdigit(iq[i][j])) nums[i]=nums[i]*10+iq[i][j]-'0';
		for(int i=0; i<iq.size(); ++i) {
			double ni=nums[i];
			int rc=1;
			if(ops[i].size()==1){ 
				if(ops[i][0]=='>') ni+=0.5;
				else ni-=0.5;
			}
			for(int j=0; j<iq.size(); ++j) if(i!=j) {
				if(ops[j].compare("<")==0 && ni<nums[j]) ++rc;
				else if(ops[j].compare("<=")==0 && ni<=nums[j]) ++rc;
				else if(ops[j].compare("=")==0 && ni==nums[j]) ++rc;
				else if(ops[j].compare(">=")==0 && ni>=nums[j]) ++rc;
				else if(ops[j].compare(">")==0 && ni>nums[j]) ++rc;
			}
			rez=max(rez,rc);
		}
		return rez;
	}
};


//Powered by [KawigiEdit] 2.0!
