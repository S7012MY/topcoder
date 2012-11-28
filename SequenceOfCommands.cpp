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

const int dx[]={-1,0,1,0},
		  dy[]={ 0,1,0,-1};
per sum(0,0);

struct SequenceOfCommands {
	string whatHappens(vector <string> c) {
		string rez="unbounded";
		per pc(0,0);
		int d=0;
		for(int k=0; k<4; ++k) {
			for(int i=0; i<c.size(); ++i) {
				for(int j=0; j<c[i].size(); ++j) {
					if('L'==c[i][j]) d=(d+3)%4;
					else if('R'==c[i][j]) d=(d+1)%4;
					else {
						pc.x+=dx[d];pc.y+=dy[d];
					}
					cout<<pc.x<<' '<<pc.y<<'\n';
				}
				//sum.x+=pc.x;
				//sum.y+=pc.y;
			}
			//cout<<sum.x<<' '<<sum.y<<'\n';
		}
		if(pc==make_pair(0,0)) return "bounded";
		return rez;
	}
};


double test0() {
	string t0[] = {"L"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	SequenceOfCommands * obj = new SequenceOfCommands();
	clock_t start = clock();
	string my_answer = obj->whatHappens(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "bounded";
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
	string t0[] = {"SRSL"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	SequenceOfCommands * obj = new SequenceOfCommands();
	clock_t start = clock();
	string my_answer = obj->whatHappens(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "unbounded";
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
	string t0[] = {"SSSS","R"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	SequenceOfCommands * obj = new SequenceOfCommands();
	clock_t start = clock();
	string my_answer = obj->whatHappens(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "bounded";
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
	string t0[] = {"SRSL","LLSSSSSSL","SSSSSS","L"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	SequenceOfCommands * obj = new SequenceOfCommands();
	clock_t start = clock();
	string my_answer = obj->whatHappens(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "unbounded";
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
