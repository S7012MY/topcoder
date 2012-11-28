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
#define DN 40
using namespace std;

typedef pair<int, int> per;
typedef vector<int>::iterator it;
typedef set<int>::iterator is;

struct TourCounting {
	int n,MOD,rez[DN][DN],rf[DN][DN],aux[DN][DN],mi[DN][DN];
int mu[DN][DN];

void inm(int a[DN][DN],int b[DN][DN],int r[DN][DN]) {
    for(int i=0; i<n; ++i) for(int j=0; j<n; ++j) {
        int c=0;
        for(int k=0; k<n; ++k) c=(c+1LL*a[i][k]*b[k][j])%MOD;
        r[i][j]=c;
    }
}

void add(int a[DN][DN], int b[DN][DN]) {
    for(int i=0; i<n; ++i) for(int j=0; j<n; ++j) {
        a[i][j]+=b[i][j];
        if(a[i][j]>=MOD) a[i][j]-=MOD;
    }
}

void lgput(int e) {
    int c[DN][DN];
    memset(rez,0,sizeof(rez));
    memcpy(c,mi,sizeof(c));
    for(int i=0; i<n; ++i) rez[i][i]=1;
    for(int i=0; (1<<i)<=e; ++i) {
        if((1<<i)&e) {
            inm(rez,c,aux);
            memcpy(rez,aux,sizeof(rez));
        }
        inm(c,c,aux);
        memcpy(c,aux,sizeof(aux));
    }
}

void fa(int k) {
    memset(rez,0,sizeof(rez));
    if(k==0) return;
    if(k&1) {
        fa(k-1);
        lgput(k);
        add(rf,rez);
    }else {
        fa(k/2);
        lgput(k/2);
        add(rez,mu);
        inm(rf,rez,aux);
        memcpy(rf,aux,sizeof(rf));
    }
}

int countTours(vector<string> g, int k, int m) {
    n=g.size(); MOD=m;
    for(int i=0; i<n; ++i) {
        for(int j=0; j<n; ++j) if('Y'==g[i][j]) mi[i][j]=1;
        mu[i][i]=1;
    }
    fa(k-1);
    int r=0;
    for(int i=0; i<n; ++i) r=(r+rf[i][i])%MOD;
    return r;
}
};


double test0() {
	string t0[] = {"NYNY",
 "NNYN",
 "YNNN",
 "YNNN"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 6;
	int p2 = 100;
	TourCounting * obj = new TourCounting();
	clock_t start = clock();
	int my_answer = obj->countTours(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 12;
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
	string t0[] = {"NYNNNNN",
 "NNYNNNN",
 "NNNYNNN",
 "NNNNYNN",
 "NNNNNYN",
 "NNNNNNY",
 "YNNNNNN"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 40;
	int p2 = 13;
	TourCounting * obj = new TourCounting();
	clock_t start = clock();
	int my_answer = obj->countTours(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 9;
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
	string t0[] = {"NYNY",
 "NNNN",
 "YYNY",
 "NYNN"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 1000000;
	int p2 = 1000000000;
	TourCounting * obj = new TourCounting();
	clock_t start = clock();
	int my_answer = obj->countTours(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 0;
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
	string t0[] = {"NY",
 "YN"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 1500;
	int p2 = 1;
	TourCounting * obj = new TourCounting();
	clock_t start = clock();
	int my_answer = obj->countTours(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 0;
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
	string t0[] = {"NYYNYYN",
 "YNYNYNY",
 "NYNYNYN",
 "YYYNYNY",
 "NNYYNNY",
 "NYYYNNY",
 "YYYYYYN"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 30;
	int p2 = 100;
	TourCounting * obj = new TourCounting();
	clock_t start = clock();
	int my_answer = obj->countTours(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 72;
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
double test5() {
	string t0[] = {"NYYY",
 "YNYY",
 "YYNY",
 "YNYN"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 1000;
	int p2 = 10000;
	TourCounting * obj = new TourCounting();
	clock_t start = clock();
	int my_answer = obj->countTours(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 3564;
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
	
	time = test5();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
