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

LL nr[(1<<17)][20];
int c[300];

int check(string a, string b) {
	return a[0]==b[0] || c[a[1]]==c[b[1]];
}

struct TheCardLineDivTwo {
	int count(vector <string> cr) {
		//Dinamica nr[i][j]=numarul de posibilitati cu ultima carte j si carti alese din i
		int rez=0,n=cr.size();
		c['S']=c['C']=1; c['D']=c['H']=2;
		for(int i=0; i<n; ++i) nr[1<<i][i]=1;
		for(int s=0; s<(1<<n); ++s) for(int i=0; i<n; ++i) if(nr[s][i])
			for(int j=0; j<n; ++j) if(!(s&(1<<j)) && check(cr[i],cr[j]))
				nr[s|(1<<j)][j]=(nr[s|(1<<j)][j]+nr[s][i])%1234567891;
		for(int i=0; i<n; ++i) rez=(rez+nr[(1<<n)-1][i])%1234567891;
		return rez;
		return rez;
	}
};


double test0() {
	string t0[] = {"KH", "QD", "KC"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	TheCardLineDivTwo * obj = new TheCardLineDivTwo();
	clock_t start = clock();
	int my_answer = obj->count(p0);
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
	string t0[] = {"JS", "JC", "JD", "JH"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	TheCardLineDivTwo * obj = new TheCardLineDivTwo();
	clock_t start = clock();
	int my_answer = obj->count(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 24;
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
	string t0[] = {"2S", "3C", "4C", "5S", "6C", "7S", "8S", "9H"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	TheCardLineDivTwo * obj = new TheCardLineDivTwo();
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
	string t0[] = {"KD", "KC", "AD", "7C", "AH", "9C", "4H", "4S", "AS"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	TheCardLineDivTwo * obj = new TheCardLineDivTwo();
	clock_t start = clock();
	int my_answer = obj->count(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 2416;
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
