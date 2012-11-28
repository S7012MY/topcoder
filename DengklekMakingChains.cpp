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

bitset<55> fol;

struct DengklekMakingChains {
	bool iscont(string s) {
		for(int i=0; i<s.size(); ++i) if(!isdigit(s[i])) return 0;
		return 1;
	}
	int cst(string s) {
		int r=0;
		for(int i=0; i<s.size(); ++i) r+=s[i]-'0';
		return r;
	}
	
	int cs(string s) {
		int r=0;
		for(int i=0; i<s.size(); ++i) {
			if(!isdigit(s[i])) return r;
			r+=s[i]-'0';
		}
		return r;
	}
	
	int cd(string s) {
		int r=0;
		for(int i=s.size()-1; i>=0; --i) {
			if(!isdigit(s[i])) return r;
			r+=s[i]-'0';
		}
		return r;
	}
	
	int maxBeauty(vector <string> chains) {
		int rez=0,n=chains.size(),cpl=0,rezs=0;
		for(int i=0; i<n; ++i) rezs=max(rez,chains[i][1]-'0');
		for(int i=0; i<n; ++i)
			if(iscont(chains[i])) {
				rez+=cst(chains[i]);
				fol[i]=1;
			}
		for(int i=0; i<n; ++i) if(!fol[i]) {
			fol[i]=1;
			for(int j=0; j<n; ++j) if(!fol[j]) {
				int st=cs(chains[i]);
				int dr=cd(chains[j]);
				cpl=max(cpl,st+dr);
			}
			fol[i]=0;
		}
		return max(rez+cpl,rezs);
	}
};


double test0() {
	string t0[] = {".15", "7..", "402", "..3"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	DengklekMakingChains * obj = new DengklekMakingChains();
	clock_t start = clock();
	int my_answer = obj->maxBeauty(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 19;
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
	string t0[] = {"..1", "7..", "567", "24.", "8..", "234"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	DengklekMakingChains * obj = new DengklekMakingChains();
	clock_t start = clock();
	int my_answer = obj->maxBeauty(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 36;
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
	string t0[] = {"...", "..."};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	DengklekMakingChains * obj = new DengklekMakingChains();
	clock_t start = clock();
	int my_answer = obj->maxBeauty(p0);
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
	string t0[] = {"16.", "9.8", ".24", "52.", "3.1", "532", "4.4", "111"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	DengklekMakingChains * obj = new DengklekMakingChains();
	clock_t start = clock();
	int my_answer = obj->maxBeauty(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 28;
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
double test4() {
	string t0[] = {"..1", "3..", "2..", ".7."};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	DengklekMakingChains * obj = new DengklekMakingChains();
	clock_t start = clock();
	int my_answer = obj->maxBeauty(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 7;
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
double test5() {
	string t0[] = {"412", "..7", ".58", "7.8", "32.", "6..", "351", "3.9", "985", "...", ".46"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	DengklekMakingChains * obj = new DengklekMakingChains();
	clock_t start = clock();
	int my_answer = obj->maxBeauty(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 58;
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
