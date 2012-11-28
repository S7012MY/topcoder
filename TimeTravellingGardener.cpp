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

struct TimeTravellingGardener {
int det(per a, per b,per c) {
    return a.x*b.y+a.y*c.x+b.x*c.y-a.x*c.y-a.y*b.x-c.x*b.y;
}

double dist(const per &a,const per &b) {
    return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}
	int determineUsage(vector <int> distance, vector <int> height) {
		per zz(0,0);
		int rez=9999,n=height.size();
		per p[55];
		p[0]=make_pair(0,height[0]);
		for(int i=1; i<n; ++i) p[i]=make_pair(p[i-1].x+distance[i-1],height[i]);
		for(int i=0; i<n; ++i) for(int j=0; j<n; ++j) if(j!=i) {
			int c=0,ok=1;
			for(int k=0; k<n; ++k) {
				int ha = (p[k].x - p[i].x) * height[j] + (p[j].x - p[k].x) * height[i];
                int hb = p[j].x - p[i].x;
                 if (ha < 0 || ha > hb * height[k]) {
                 	ok=0;
                 	break;
                 }
				if (ha == hb * height[k])
                        ++c;
			}
			if(ok) rez=min(rez,n-c);
		}
		return rez;
	}
};


double test0() {
	int t0[] = {2,2};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {1,3,10};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	TimeTravellingGardener * obj = new TimeTravellingGardener();
	clock_t start = clock();
	int my_answer = obj->determineUsage(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 1;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	int t0[] = {3,3};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {3,1,3};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	TimeTravellingGardener * obj = new TimeTravellingGardener();
	clock_t start = clock();
	int my_answer = obj->determineUsage(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 2;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	int t0[] = {1,3};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {4,4,4};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	TimeTravellingGardener * obj = new TimeTravellingGardener();
	clock_t start = clock();
	int my_answer = obj->determineUsage(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 0;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	int t0[] = {4,2};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {9,8,5};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	TimeTravellingGardener * obj = new TimeTravellingGardener();
	clock_t start = clock();
	int my_answer = obj->determineUsage(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 1;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	int t0[] = {476,465,260,484};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {39,13,8,72,80};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	TimeTravellingGardener * obj = new TimeTravellingGardener();
	clock_t start = clock();
	int my_answer = obj->determineUsage(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 3;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test5() {
	int t0[] = {173,36,668,79,26,544};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {488,743,203,446,444,91,453};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	TimeTravellingGardener * obj = new TimeTravellingGardener();
	clock_t start = clock();
	int my_answer = obj->determineUsage(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 5;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test6() {
	int t0[] = {2,4,2,2,4,2,4,2,2,4};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {2,2,10,10,10,16,16,22,22,28,28};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	TimeTravellingGardener * obj = new TimeTravellingGardener();
	clock_t start = clock();
	int my_answer = obj->determineUsage(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 6;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
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
