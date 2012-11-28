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
const int dx[]={ 0,1, 0,-1},
		  dy[]={ 1,0,-1, 0};
int nrd[55][55];

struct MazeWanderingEasy {
	int decisions(vector <string> mt) {
		int rez,n=mt.size(),m=mt[0].size();
		per start,goal;
		for(int i=0; i<n; ++i) for(int j=0; j<m; ++j) {
			nrd[i][j]=m*n;
			if(mt[i][j]=='M') start=make_pair(i,j);
			if(mt[i][j]=='*') goal=make_pair(i,j);
		}
		nrd[start.x][start.y]=0;
		for(c.push(start);c.size();c.pop()) {
			per fr=c.front();
			int nrv=0;
			for(int d=0; d<4; ++d) {
				int ii=fr.x+dx[d],jj=fr.y+dy[d];
				if(ii>=0 && jj>=0 && ii<n && jj<m &&
				   '.'==mt[ii][jj] && n*m==nrd[ii][jj]) ++nrv;
			}
			for(int d=0; d<4; ++d) {
				int ii=fr.x+dx[d],jj=fr.y+dy[d];
				if(ii>=0 && jj>=0 && ii<n && jj<m &&
				   '.'==mt[ii][jj] && n*m==nrd[ii][jj]) {
				   nrd[ii][jj]=nrd[fr.x][fr.y]+(nrv>1);
				   c.push(make_pair(ii,jj));
				}
			}
		}
		return nrd[goal.x][goal.y];
	}
};


double test0() {
	string t0[] = {"*.M"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	MazeWanderingEasy * obj = new MazeWanderingEasy();
	clock_t start = clock();
	int my_answer = obj->decisions(p0);
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
double test1() {
	string t0[] = {"*.M",
 ".X."};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	MazeWanderingEasy * obj = new MazeWanderingEasy();
	clock_t start = clock();
	int my_answer = obj->decisions(p0);
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
double test2() {
	string t0[] = {"...",
 "XMX",
 "..*"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	MazeWanderingEasy * obj = new MazeWanderingEasy();
	clock_t start = clock();
	int my_answer = obj->decisions(p0);
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
double test3() {
	string t0[] = {".X.X......X",
 ".X*.X.XXX.X",
 ".XX.X.XM...",
 "......XXXX."};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	MazeWanderingEasy * obj = new MazeWanderingEasy();
	clock_t start = clock();
	int my_answer = obj->decisions(p0);
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
double test4() {
	string t0[] = {"..........*",
 ".XXXXXXXXXX",
 "...........",
 "XXXXXXXXXX.",
 "M.........."};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	MazeWanderingEasy * obj = new MazeWanderingEasy();
	clock_t start = clock();
	int my_answer = obj->decisions(p0);
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
	
	time = test4();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
