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

set<int> am;

struct KingdomAndDice {
	double newFairness(vector <int> fd, vector <int> sd, int X) {
		int n=fd.size();
		for(int i=0; i<fd.size(); ++i) {
			am.insert(fd[i]);
			am.insert(sd[i]);
		}
		int tot=n*n,win=0;
		for(int i=0; i<fd.size(); ++i) if(fd[i]) for(int j=0; j<sd.size(); ++j) if(fd[i]>sd[j]) ++win;
		int mij=tot/2;
		if(win>=mij) {
			return (double)win/tot;
		}
		sort(sd.begin(),sd.end());
		//cout<<win<<' '<<mij<<'\n';
		for(int i=0; i<fd.size(); ++i) if(!fd[i]) {
			int prim=0,doi=0,unde=min(n-1,max(mij-win,0));
			for(int j=sd[unde]; j>0;--j) if(am.find(j)==am.end()) {
				prim=j;
				break;
			}
			for(int j=sd[unde]; j<=X;++j) if(am.find(j)==am.end()) {
				doi=j;
				break;
			}
				fd[i]=prim;
				int cwin=0;
				for(int i=0; i<fd.size(); ++i) if(fd[i]) for(int j=0; j<sd.size(); ++j) if(fd[i]>sd[j]) ++cwin;
				fd[i]=doi;
				int cwin2=0;
				for(int i=0; i<fd.size(); ++i) if(fd[i]) for(int j=0; j<sd.size(); ++j) if(fd[i]>sd[j]) ++cwin2;
				if(fabs((double)cwin/tot-0.5)<=fabs((double)cwin2/tot-0.5)) {
					fd[i]=prim;
					am.insert(prim);
				}
				else {
					fd[i]=doi;
					am.insert(doi);
				}
				cout<<prim<<' '<<doi<<'\n';
		}
		win=0;
		for(int i=0; i<fd.size(); ++i) if(fd[i]) for(int j=0; j<sd.size(); ++j) if(fd[i]>sd[j]) ++win;
		for(int i=0; i<n; ++i) cout<<fd[i]<<' ';
		return (double)win/tot;
	}
};


double test0() {
	int t0[] = {0, 2, 7, 0};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {6, 3, 8, 10};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 12;
	KingdomAndDice * obj = new KingdomAndDice();
	clock_t start = clock();
	double my_answer = obj->newFairness(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p3 = 0.4375;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	int t0[] = {0, 2, 7, 0};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {6, 3, 8, 10};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 10;
	KingdomAndDice * obj = new KingdomAndDice();
	clock_t start = clock();
	double my_answer = obj->newFairness(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p3 = 0.375;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	int t0[] = {0, 0};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {5, 8};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 47;
	KingdomAndDice * obj = new KingdomAndDice();
	clock_t start = clock();
	double my_answer = obj->newFairness(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p3 = 0.5;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	int t0[] = {19, 50, 4};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {26, 100, 37};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 1000;
	KingdomAndDice * obj = new KingdomAndDice();
	clock_t start = clock();
	double my_answer = obj->newFairness(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p3 = 0.2222222222222222;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	int t0[] = {6371, 0, 6256, 1852, 0, 0, 6317, 3004, 5218, 9012};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {1557, 6318, 1560, 4519, 2012, 6316, 6315, 1559, 8215, 1561};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 10000;
	KingdomAndDice * obj = new KingdomAndDice();
	clock_t start = clock();
	double my_answer = obj->newFairness(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p3 = 0.49;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}

int main() {
	int time;
	bool errors = false;
	
	time = test0();
	if (time < 0)
		errors = true;
	
	time = test1();
	if (time < 0)
		errors = true;
	
	time = test2();
	if (time < 0)
		errors = true;
	
	time = test3();
	if (time < 0)
		errors = true;
	
	time = test4();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
