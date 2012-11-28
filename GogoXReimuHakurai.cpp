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

struct GogoXReimuHakurai {
	int solve(vector <string> choices) {
		int n=choices.size(),sol[105];
		
		for(int i=1; i<n; ++i) sol[i]=0;
		sol[0]=1;
		for(int i=1; i<n; ++i) {
			for(int j=0; j<i; ++j) if(choices[j][i]=='Y') {
				//cout<<j<<' '<<i<<'\n';
				sol[i]+=sol[j];
			}
		}
		//for(int i=0; i<n; ++i) cout<<sol[i]<<' ';
		return sol[n-1];
	}
};


double test0() {
	string t0[] = {
"NYY",
"NNY",
"NNN"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	GogoXReimuHakurai * obj = new GogoXReimuHakurai();
	clock_t start = clock();
	int my_answer = obj->solve(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 2;
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
	string t0[] = {
"NYNY",
"NNYY",
"NNNY",
"NNNN"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	GogoXReimuHakurai * obj = new GogoXReimuHakurai();
	clock_t start = clock();
	int my_answer = obj->solve(p0);
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
	string t0[] = {"NNY"
,"NNY"
,"NNN"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	GogoXReimuHakurai * obj = new GogoXReimuHakurai();
	clock_t start = clock();
	int my_answer = obj->solve(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 1;
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
	string t0[] = {"NN"
,"NN"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	GogoXReimuHakurai * obj = new GogoXReimuHakurai();
	clock_t start = clock();
	int my_answer = obj->solve(p0);
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
