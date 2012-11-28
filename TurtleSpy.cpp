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

double pi=3.141592653589793;

struct TurtleSpy {
	int getnum(string s) {
		int ret=0;
		for(int i=0; i<s.size(); ++i) if(isdigit(s[i])) ret=ret*10+s[i]-'0';
		return ret;
	}
	
	double rad(double n) {
		return (n*pi)/180.0;
	}
	
	double maxDistance(vector <string> commands) {
		vector<int> fw,bw,lft,rgt;
		double rez=0;
		int l,r,f,b,angle;
		l=r=f=b=0;
		for(int i=0; i<commands.size(); ++i)
			if('f'==commands[i][0]) {
				f+=getnum(commands[i]);
				fw.push_back(getnum(commands[i]));
			}
			else if('b'==commands[i][0]) {
				bw.push_back(getnum(commands[i]));
				b+=getnum(commands[i]);
			}
			else if('r'==commands[i][0]) {
				rgt.push_back(getnum(commands[i]));
				r+=getnum(commands[i]);
			}
			else {
				lft.push_back(getnum(commands[i]));
				l+=getnum(commands[i]);;
			}
		l%=360; r%=360;
		angle=max(l,r);
		angle%=360;
		cout<<angle<<' ';
		double ra=rad(angle);
		cout<<ra;
		rez=(double)f*f+(double)b*b-2.0*f*b*cos(ra);
		return sqrt(rez);
	}
};


double test0() {
	string t0[] = {"forward 100", "backward 100", "left 90" };
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	TurtleSpy * obj = new TurtleSpy();
	clock_t start = clock();
	double my_answer = obj->maxDistance(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p1 = 141.4213562373095;
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
	string t0[] = {"left 45", "forward 100", "right 45", "forward 100"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	TurtleSpy * obj = new TurtleSpy();
	clock_t start = clock();
	double my_answer = obj->maxDistance(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p1 = 200.0;
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
	string t0[] = {"left 10", "forward 40",  "right 30", "left 10", "backward 4", "forward 4" };
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	TurtleSpy * obj = new TurtleSpy();
	clock_t start = clock();
	double my_answer = obj->maxDistance(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p1 = 40.58520737741619;
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
