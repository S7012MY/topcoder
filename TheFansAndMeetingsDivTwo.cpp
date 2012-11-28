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

double probJ[50],probB[50];

struct TheFansAndMeetingsDivTwo {
	double find(vector <int> minJ, vector <int> maxJ, vector <int> minB, vector <int> maxB) {
		double rez=0;
		int n=minJ.size();
		for(int i=0; i<n; ++i) {
			int lg=maxJ[i]-minJ[i]+1;
			for(int j=minJ[i]; j<=maxJ[i]; ++j) probJ[j]+=(1.0/((double)lg*n));
			lg=maxB[i]-minB[i]+1;
			for(int j=minB[i]; j<=maxB[i]; ++j) probB[j]+=(1.0/((double)lg*n));
		}
		for(int i=0; i<=50; ++i) {
			rez+=probJ[i]*probB[i];
			//cout<<probJ[i]<<' '<<probB[i]<<'\n';
		}
		return rez;
	}
};


double test0() {
	int t0[] = {1};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {3};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {1};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {1};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	TheFansAndMeetingsDivTwo * obj = new TheFansAndMeetingsDivTwo();
	clock_t start = clock();
	double my_answer = obj->find(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p4 = 0.3333333333333333;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	int t0[] = {5, 7, 7, 1, 6, 1, 1};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {8, 9, 7, 3, 9, 5, 3};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {9, 12, 10, 14, 50, 9, 10};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {9, 13, 50, 15, 50, 12, 11};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	TheFansAndMeetingsDivTwo * obj = new TheFansAndMeetingsDivTwo();
	clock_t start = clock();
	double my_answer = obj->find(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p4 = 0.014880952380952378;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	int t0[] = {44};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {47};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {4};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {7};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	TheFansAndMeetingsDivTwo * obj = new TheFansAndMeetingsDivTwo();
	clock_t start = clock();
	double my_answer = obj->find(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p4 = 0.0;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	int t0[] = {1, 6, 3, 1, 4, 3, 5, 1};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {7, 8, 5, 7, 9, 7, 9, 3};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {5, 1, 5, 3, 1, 2, 4, 1};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {9, 2, 7, 9, 4, 5, 4, 9};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	TheFansAndMeetingsDivTwo * obj = new TheFansAndMeetingsDivTwo();
	clock_t start = clock();
	double my_answer = obj->find(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p4 = 0.11562305130385474;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
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
