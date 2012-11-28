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

int tp[1005];

struct TheCoffeeTimeDivTwo {
	int find(int n, vector <int> tea) {
		int rez=0,t=tea.size()-1,c;
		c=n-t-1;
		for(int i=0; i<=n; ++i) tp[i]=0;
		for(int i=0; i<tea.size(); ++i) tp[tea[i]]=1;
		for(;t;) {
			//++rez;
			rez+=47;
			int cnt=0,drm=0;
			for(int i=1; i<=n && cnt<=7; ++i) if(1==tp[i]) {
				++cnt;
				drm=i;
				tp[i]=-1;
			}
			//rez+=(4*cnt);
			rez+=2*drm;
			t-=cnt;
			//if(t||c) ++rez;
		}
		for(;c;) {
			//++rez;
			rez+=47;
			int cnt=0,drm=0;
			for(int i=1; i<=n && cnt<=7; ++i) if(0==tp[i]) {
				++cnt;
				drm=i;
				tp[i]=-1;
			}
			//rez+=(4*cnt);
			rez+=2*drm;
			c-=cnt;
			//if(c) ++rez;
		}
		rez+=4*n;
		return rez;
	}
};


double test0() {
	int p0 = 2;
	int t1[] = {1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	TheCoffeeTimeDivTwo * obj = new TheCoffeeTimeDivTwo();
	clock_t start = clock();
	int my_answer = obj->find(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 108;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	int p0 = 2;
	int t1[] = {2, 1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	TheCoffeeTimeDivTwo * obj = new TheCoffeeTimeDivTwo();
	clock_t start = clock();
	int my_answer = obj->find(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 59;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	int p0 = 15;
	int t1[] = {1, 2, 3, 4, 5, 6, 7};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	TheCoffeeTimeDivTwo * obj = new TheCoffeeTimeDivTwo();
	clock_t start = clock();
	int my_answer = obj->find(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 261;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	int p0 = 47;
	int t1[] = {1, 10, 6, 2, 4};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	TheCoffeeTimeDivTwo * obj = new TheCoffeeTimeDivTwo();
	clock_t start = clock();
	int my_answer = obj->find(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 891;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
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
