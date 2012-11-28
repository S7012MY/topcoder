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

queue<per> c;
bitset<55> viz[55];

int nrd;
vector<string> b;
int n,m;

struct MagicBoard {

	bool check(int a, int b) {
		if(a<0 || b<0 ||a>=n ||b>=n) return 0;
		return 1;
	}

	bool dfs(int a, int bb, int nr,int pas) {
		if(b[a][bb]=='#') ++nr;
		if(nr==nrd) return 1;
		viz[a][bb]=1;
		bool ret=0;
		if(pas&1) {
			if(check(a+1,bb) && 0==viz[a+1][bb]) ret|=dfs(a+1,bb,nr,pas+1);
			if(check(a-1,bb) && 0==viz[a-1][bb]) ret|=dfs(a-1,bb,nr,pas+1);
		}else {
			if(check(a,bb+1) && 0==viz[a][bb+1]) ret|=dfs(a,bb+1,nr,pas+1);
			if(check(a,bb-1) && 0==viz[a][bb-1]) ret|=dfs(a,bb-1,nr,pas+1);
		}
		viz[a][bb]=0;
		return ret;
	}
	string ableToUnlock(vector <string> bo) {
		string rez;
		b=bo;n=b.size(); m=b[0].size();
		bool ok=0;
		for(int i=0; i<n; ++i) for(int j=0; j<m; ++j) if('#'==b[i][j]) ++nrd;
		for(int i=0; i<n; ++i) for(int j=0; j<m; ++j) ok|=dfs(i,j,0,1);
		if(ok) return "YES";
		else return "NO";
	}
};


double test0() {
	string t0[] = {"##",
 ".#"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	MagicBoard * obj = new MagicBoard();
	clock_t start = clock();
	string my_answer = obj->ableToUnlock(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "YES";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p1 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	string t0[] = {"#.",
 ".#"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	MagicBoard * obj = new MagicBoard();
	clock_t start = clock();
	string my_answer = obj->ableToUnlock(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "NO";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p1 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	string t0[] = {"##",
 "##",
 "##"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	MagicBoard * obj = new MagicBoard();
	clock_t start = clock();
	string my_answer = obj->ableToUnlock(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "YES";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p1 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	string t0[] = {"###",
 "###",
 "###"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	MagicBoard * obj = new MagicBoard();
	clock_t start = clock();
	string my_answer = obj->ableToUnlock(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "NO";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p1 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	string t0[] = {"###",
 "..#",
 "###",
 "#..",
 "###"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	MagicBoard * obj = new MagicBoard();
	clock_t start = clock();
	string my_answer = obj->ableToUnlock(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "NO";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p1 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test5() {
	string t0[] = {"................",
 ".######..######.",
 ".######..######.",
 ".##......##..##.",
 ".##......##..##.",
 ".######..######.",
 ".######..######.",
 ".....##..##..##.",
 ".....##..##..##.",
 ".######..######.",
 ".######..######.",
 "................"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	MagicBoard * obj = new MagicBoard();
	clock_t start = clock();
	string my_answer = obj->ableToUnlock(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "YES";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p1 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test6() {
	string t0[] = {"#"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	MagicBoard * obj = new MagicBoard();
	clock_t start = clock();
	string my_answer = obj->ableToUnlock(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "YES";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p1 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	
	time = test4();
	if (time < 0)
		errors = true;
	
	time = test5();
	if (time < 0)
		errors = true;
	
	time = test6();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
