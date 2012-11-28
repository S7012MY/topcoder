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

struct FractionInDifferentBases {
	LL cmmdc(LL a,LL b) {
		LL c;
		for(;b;c=a%b,a=b,b=c);
		return a;
	}
	
	LL cmmmc(LL a,LL b) {
		return (a*b)/cmmdc(a,b);
	}
	
	long long getNumberOfGoodBases(long long P, long long Q, long long A, long long B) {
		long long rez,gc=cmmdc(P,Q),por=1;
		P/=gc; Q/=gc;
		LL cq=Q;
		for(int i=2; i<=cq; ++i) if(0==cq%i) {
			por=cmmmc(por,i);
			for(;0==cq%i;cq/=i);
		}
		LL c=A/por,d=B/por;
		if(por*c<A) ++c;
		cout<<por<<' '<<c<<' '<<d;
		rez=(B-A+1)-(d-c+1);
		return rez;
	}
};


double test0() {
	long long p0 = 1LL;
	long long p1 = 2LL;
	long long p2 = 10LL;
	long long p3 = 10LL;
	FractionInDifferentBases * obj = new FractionInDifferentBases();
	clock_t start = clock();
	long long my_answer = obj->getNumberOfGoodBases(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p4 = 0LL;
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
	long long p0 = 1LL;
	long long p1 = 9LL;
	long long p2 = 9LL;
	long long p3 = 10LL;
	FractionInDifferentBases * obj = new FractionInDifferentBases();
	clock_t start = clock();
	long long my_answer = obj->getNumberOfGoodBases(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p4 = 1LL;
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
	long long p0 = 5LL;
	long long p1 = 6LL;
	long long p2 = 2LL;
	long long p3 = 10LL;
	FractionInDifferentBases * obj = new FractionInDifferentBases();
	clock_t start = clock();
	long long my_answer = obj->getNumberOfGoodBases(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p4 = 8LL;
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
	long long p0 = 2662LL;
	long long p1 = 540LL;
	long long p2 = 2LL;
	long long p3 = 662LL;
	FractionInDifferentBases * obj = new FractionInDifferentBases();
	clock_t start = clock();
	long long my_answer = obj->getNumberOfGoodBases(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p4 = 639LL;
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
double test4() {
	long long p0 = 650720LL;
	long long p1 = 7032600LL;
	long long p2 = 2012LL;
	long long p3 = 2012540LL;
	FractionInDifferentBases * obj = new FractionInDifferentBases();
	clock_t start = clock();
	long long my_answer = obj->getNumberOfGoodBases(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p4 = 2010495LL;
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
	
	time = test4();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
