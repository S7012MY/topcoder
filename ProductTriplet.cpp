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

struct ProductTriplet {
	long long f(long long x0, long long y1, long long y2, long long z1, long long z2) {
  		z1=max(z1, x0*x0+1);
  		if (z2 < z1) return 0;
  		y1=max(y1, (z1+x0-1)/x0);
 		y2=min(y2, z2/x0);
  		return max(0LL, y2-y1+1);
	}
	long long countTriplets(int minx, int maxx, int miny, int maxy, int minz, int maxz) {
		long long x1=minx, x2=maxx, y1=miny, y2=maxy, z1=minz, z2=maxz;
  		long long cnt=0;
  		for (long long x0=x1; x0 <= x2 && x0*x0 < z2; ++x0)
    		cnt += f(x0, y1, y2, z1, z2);
  		for (long long y0=y1; y0 <= y2 && y0*y0 < z2; ++y0)
    		cnt += f(y0, x1, x2, z1, z2);
  		for (long long sq=max(x1, y1); sq <= min(x2, y2) && sq*sq <= z2; ++sq)
    		if (z1 <= sq*sq) ++cnt;
  		return cnt;
	}
};


double test0() {
	int p0 = 2;
	int p1 = 2;
	int p2 = 3;
	int p3 = 3;
	int p4 = 6;
	int p5 = 6;
	ProductTriplet * obj = new ProductTriplet();
	clock_t start = clock();
	long long my_answer = obj->countTriplets(p0, p1, p2, p3, p4, p5);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p6 = 1LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p6 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p6 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	int p0 = 2;
	int p1 = 2;
	int p2 = 3;
	int p3 = 3;
	int p4 = 7;
	int p5 = 7;
	ProductTriplet * obj = new ProductTriplet();
	clock_t start = clock();
	long long my_answer = obj->countTriplets(p0, p1, p2, p3, p4, p5);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p6 = 0LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p6 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p6 != my_answer) {
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
	int p1 = 8;
	int p2 = 4;
	int p3 = 5;
	int p4 = 27;
	int p5 = 35;
	ProductTriplet * obj = new ProductTriplet();
	clock_t start = clock();
	long long my_answer = obj->countTriplets(p0, p1, p2, p3, p4, p5);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p6 = 4LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p6 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p6 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	int p0 = 1;
	int p1 = 458;
	int p2 = 1;
	int p3 = 458;
	int p4 = 1;
	int p5 = 458;
	ProductTriplet * obj = new ProductTriplet();
	clock_t start = clock();
	long long my_answer = obj->countTriplets(p0, p1, p2, p3, p4, p5);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p6 = 2877LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p6 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p6 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	int p0 = 8176;
	int p1 = 184561;
	int p2 = 1348;
	int p3 = 43168;
	int p4 = 45814517;
	int p5 = 957843164;
	ProductTriplet * obj = new ProductTriplet();
	clock_t start = clock();
	long long my_answer = obj->countTriplets(p0, p1, p2, p3, p4, p5);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p6 = 2365846085LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p6 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p6 != my_answer) {
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
