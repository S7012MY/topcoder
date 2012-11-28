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

struct RectangleAvoidingColoringEasy {
	vector<string> b;
	bool check(int n, int m) {
		for(int i=0; i<n; ++i)
			for(int j=0; j<m; ++j) 
				if(b[i][j]==b[i][m] && b[i][m]==b[n][m] &&
					b[n][j]==b[i][j] && b[n][m]==b[n][j]) return 0;
		return 1;
	}
	
	int calc(int n,int m) {
		int r=0;
		if(n==b.size()) return 1;
		if(m==b[0].size()) return calc(n+1,0);
		if(b[n][m]=='?') {
			b[n][m]='B';
			if(check(n,m)) r+=calc(n,m+1);
			b[n][m]='W';
			if(check(n,m)) r+=calc(n,m+1);
			b[n][m]='?';
		}else if(check(n,m)) return calc(n,m+1);
		return r;
	}
	
	int count(vector <string> board) {
		b=board;
		return calc(0,0);
	}
};


double test0() {
	string t0[] = {"??",
 "??"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	RectangleAvoidingColoringEasy * obj = new RectangleAvoidingColoringEasy();
	clock_t start = clock();
	int my_answer = obj->count(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 14;
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
	string t0[] = {"B?",
 "?B"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	RectangleAvoidingColoringEasy * obj = new RectangleAvoidingColoringEasy();
	clock_t start = clock();
	int my_answer = obj->count(p0);
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
double test2() {
	string t0[] = {"WW",
 "WW"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	RectangleAvoidingColoringEasy * obj = new RectangleAvoidingColoringEasy();
	clock_t start = clock();
	int my_answer = obj->count(p0);
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
double test3() {
	string t0[] = {"??B??",
 "W???W",
 "??B??"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	RectangleAvoidingColoringEasy * obj = new RectangleAvoidingColoringEasy();
	clock_t start = clock();
	int my_answer = obj->count(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 12;
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
