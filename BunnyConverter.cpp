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

vector<int> resturi[500005];
queue<int> c;
bitset<500005> viz;
int dist[500005];

struct BunnyConverter {
	int getMinimum(int n, int z, int start, int goal) {
		int z3;
		long long adun=n*1LL*n;
		if(start==goal) return 0;
		z3=(((z*1LL*z)%n)*z %n);
		start%=n; goal%=n;
		for(int i=0; i<n; ++i) resturi[(i*1LL*i)%n].push_back(i);
		dist[goal]=-1;
		for(c.push(start);c.size();c.pop()) {
			int fr=c.front();
			//cout<<fr<<":\n";
			viz[fr]=1;
			int q=(-z3*1LL-fr+adun)%n;
			//cout<<q<<' ';
			//cout.flush();
			for(int i=0; i<resturi[q].size(); ++i) 
				if(!viz[resturi[q][i]]) {
					//cout<<resturi[q][i]<<' ';
					dist[resturi[q][i]]=dist[fr]+1;
					c.push(resturi[q][i]);
				}
			//cout<<'\n';
		}
		return dist[goal];
	}
};


double test0() {
	int p0 = 5;
	int p1 = 1;
	int p2 = 5;
	int p3 = 3;
	BunnyConverter * obj = new BunnyConverter();
	clock_t start = clock();
	int my_answer = obj->getMinimum(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p4 = 1;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	int p0 = 5;
	int p1 = 1;
	int p2 = 5;
	int p3 = 1;
	BunnyConverter * obj = new BunnyConverter();
	clock_t start = clock();
	int my_answer = obj->getMinimum(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p4 = 2;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	int p0 = 6;
	int p1 = 2;
	int p2 = 3;
	int p3 = 4;
	BunnyConverter * obj = new BunnyConverter();
	clock_t start = clock();
	int my_answer = obj->getMinimum(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p4 = -1;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	int p0 = 7;
	int p1 = 7;
	int p2 = 7;
	int p3 = 7;
	BunnyConverter * obj = new BunnyConverter();
	clock_t start = clock();
	int my_answer = obj->getMinimum(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p4 = 0;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	int p0 = 499979;
	int p1 = 499979;
	int p2 = 499976;
	int p3 = 3;
	BunnyConverter * obj = new BunnyConverter();
	clock_t start = clock();
	int my_answer = obj->getMinimum(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p4 = 249988;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p4 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p4 != my_answer) {
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
