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

bitset<55> viz[55];
queue<per> c;

const int dx[]={-2,-2,-1,-1, 1,1, 2,2},
		  dy[]={-1, 1,-2, 2,-2,2,-1,1};

struct KnightsTour {
	bool check(int a, int b) {
		if(a<0 || b<0 || a>7 || b>7) return 0;
		return 1;
	}
	int cman(int a, int b, vector<string> m) {
		int ret=0;
		for(int d=0; d<8; ++d) if(check(a+dx[d],b+dy[d]) && 0==viz[a+dx[d]][b+dy[d]] && '*'!=m[a+dx[d]][b+dy[d]]) ++ret;
		return ret;
	}
	int visitedPositions(vector <string> b) {
		int rez=0;
		per pc;
		for(int i=0; i<8; ++i) for(int j=0; j<8; ++j) if('K'==b[i][j]) pc=make_pair(i,j);
		for(c.push(pc);c.size();c.pop()) {
			pc=c.front();
			viz[pc.x][pc.y]=1;
			++rez;
			int man=100,bi=-1,bj=-1;
			for(int d=0; d<8; ++d) {
				int ii=pc.x+dx[d],jj=pc.y+dy[d];
				if(check(ii,jj) && 0==viz[ii][jj] && '*'!=b[ii][jj] && cman(ii,jj,b)<man) {
					man=cman(ii,jj,b);
					bi=ii; bj=jj;
				}
			}
			if(man!=100) c.push(make_pair(bi,bj));
		}
		return rez;
	}
};


double test0() {
	string t0[] = {"........"
,".*.*...."
,".*......"
,"..K...*."
,"*...*..."
,"...*...."
,"...*.*.."
,"........"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	KnightsTour * obj = new KnightsTour();
	clock_t start = clock();
	int my_answer = obj->visitedPositions(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 39;
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
	string t0[] = {"K......."
,"........"
,"........"
,"........"
,"........"
,"........"
,"........"
,"........"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	KnightsTour * obj = new KnightsTour();
	clock_t start = clock();
	int my_answer = obj->visitedPositions(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 64;
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
	string t0[] = {"********"
,"*******."
,"********"
,"**.***.*"
,"********"
,"***.*.**"
,"********"
,"****K***"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	KnightsTour * obj = new KnightsTour();
	clock_t start = clock();
	int my_answer = obj->visitedPositions(p0);
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
double test3() {
	string t0[] = {"*.*....*"
,".......*"
,"**...*.."
,"..***..."
,".**.*..."
,"..*.*..K"
,"..***.*."
,"**...*.."};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	KnightsTour * obj = new KnightsTour();
	clock_t start = clock();
	int my_answer = obj->visitedPositions(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 17;
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
	string t0[] = {"..*...*."
,"**.....*"
,"*..*...."
,"*..*...."
,".....*.."
,"....*..K"
,"**.*...*"
,"..**...."};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	KnightsTour * obj = new KnightsTour();
	clock_t start = clock();
	int my_answer = obj->visitedPositions(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 27;
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
