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

struct LinearTravellingSalesman {
	int findMinimumDistance(vector <int> x, vector <int> y) {
		vector<per> a,b;
		int rez=0,rez1=0,n=x.size();
		for(int i=0; i<n; ++i) {
			a.push_back(make_pair(x[i],y[i]));
			b.push_back(make_pair(y[i],x[i]));
		}
		sort(a.begin(),a.end()); sort(b.begin(),b.end());
		for(int i=1; i<n; ++i) {
			rez+=abs(a[i].x-a[i-1].x)+abs(a[i].y-a[i-1].y);
			rez1+=abs(b[i].x-b[i-1].x)+abs(b[i].y-b[i-1].y);
		}
		return min(rez,rez1);
	}
};


double test0() {
	int t0[] = {1,3,5};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {2,2,2};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	LinearTravellingSalesman * obj = new LinearTravellingSalesman();
	clock_t start = clock();
	int my_answer = obj->findMinimumDistance(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 4;
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
	int t0[] = {3,2,1};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {3,2,1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	LinearTravellingSalesman * obj = new LinearTravellingSalesman();
	clock_t start = clock();
	int my_answer = obj->findMinimumDistance(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 4;
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
	int t0[] = {0,100,1000,10000};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {0,10,100,1000};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	LinearTravellingSalesman * obj = new LinearTravellingSalesman();
	clock_t start = clock();
	int my_answer = obj->findMinimumDistance(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 11000;
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
	int t0[] = {80,60,70,50};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {50,70,60,80};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	LinearTravellingSalesman * obj = new LinearTravellingSalesman();
	clock_t start = clock();
	int my_answer = obj->findMinimumDistance(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 60;
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
double test4() {
	int t0[] = {7,7,7,7,7,7,7};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {105,1231,5663,295,3062,380,7777};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	LinearTravellingSalesman * obj = new LinearTravellingSalesman();
	clock_t start = clock();
	int my_answer = obj->findMinimumDistance(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 7672;
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
	
	time = test4();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
