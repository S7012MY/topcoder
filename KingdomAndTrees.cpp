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

struct KingdomAndTrees {
	bool check(vector<int> hc,int m) {
		int ok=1;
		hc[0]=max(hc[0]-m,1);
		for(int i=1; i<hc.size(); ++i) {
			if(hc[i-1]-hc[i]>=m) {
				//cout<<hc[i-1]<<' '<<hc[i]<<' '<<m<<'\n';
				return 0;
			}
			hc[i]=max(hc[i]-m,1);
			if(hc[i]<=hc[i-1]) hc[i]=hc[i-1]+1;
		}
		//cout<<m<<":\n";
		//for(int i=0; i<hc.size(); ++i) cout<<hc[i]<<' ';
		//cout<<'\n';
		return ok;
	}
	int minLevel(vector <int> h) {
		int rez=0,ls=0,ld=1100000000;
		for(;ls<ld;) {
			int m=(ls*1LL+ld)>>1LL;
			//cout<<ls<<' '<<ld<<' '<<m<<'\n';
			if(check(h,m)) {
				rez=m;
				ld=m;
			}else ls=m+1;
		}
		if(rez==0) return 0;
		for(;check(h,rez);--rez);
		return rez+1;
	}
};


double test0() {
	int t0[] = {9, 5, 11};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	KingdomAndTrees * obj = new KingdomAndTrees();
	clock_t start = clock();
	int my_answer = obj->minLevel(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 3;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	int t0[] = {5, 8};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	KingdomAndTrees * obj = new KingdomAndTrees();
	clock_t start = clock();
	int my_answer = obj->minLevel(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 0;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	int t0[] = {1, 1, 1, 1, 1};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	KingdomAndTrees * obj = new KingdomAndTrees();
	clock_t start = clock();
	int my_answer = obj->minLevel(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 4;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	int t0[] = {548, 47, 58, 250, 2012};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	KingdomAndTrees * obj = new KingdomAndTrees();
	clock_t start = clock();
	int my_answer = obj->minLevel(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 251;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
