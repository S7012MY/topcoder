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

struct FeudaliasBattle {
	double getMinimumTime(vector <int> baseX, vector <int> baseY, vector <int> siloX, vector <int> siloY, int takeOffTime, int rechargeTime, int missileSpeed) {
		double required[4][2];
        for (int i=0; i< siloX.size(); i++)
            for (int t=0; t< 2; t++)
                for (int j=0; j< 2; j++) {
                    double dx = baseX[j] - siloX[i], dy = baseY[j] - siloY[i];
                    required[i*2+ t][j] = sqrt(dx*dx+dy*dy) / missileSpeed + takeOffTime*(t+1)/60.0 + t*rechargeTime;
                }
        double res = 1e100;
        for (int i=0; i<4; i++)
             for (int j=0; j<4; j++)
                 if ( i!=j)
                      res = min ( res, max(required[i][0] , required[j][1] ) );
                      
        return res;
	}
};


double test0() {
	int t0[] = {100, 500};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {100, 100};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {100, 500};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {300, 300};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	int p4 = 6;
	int p5 = 10;
	int p6 = 1;
	FeudaliasBattle * obj = new FeudaliasBattle();
	clock_t start = clock();
	double my_answer = obj->getMinimumTime(p0, p1, p2, p3, p4, p5, p6);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p7 = 200.1;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p7 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p7 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	int t0[] = {100, 100};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {100, 500};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {100, 500};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {300, 300};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	int p4 = 6;
	int p5 = 10;
	int p6 = 1;
	FeudaliasBattle * obj = new FeudaliasBattle();
	clock_t start = clock();
	double my_answer = obj->getMinimumTime(p0, p1, p2, p3, p4, p5, p6);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p7 = 210.2;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p7 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p7 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	int t0[] = {100, 100};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {100, 500};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {100, 500};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {300, 300};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	int p4 = 6;
	int p5 = 20;
	int p6 = 20;
	FeudaliasBattle * obj = new FeudaliasBattle();
	clock_t start = clock();
	double my_answer = obj->getMinimumTime(p0, p1, p2, p3, p4, p5, p6);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p7 = 22.4606797749979;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p7 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p7 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	int t0[] = {401, 208};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {622, 603};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int t2[] = {51, 387};
	vector <int> p2(t2, t2+sizeof(t2)/sizeof(int));
	int t3[] = {411, 828};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	int p4 = 59;
	int p5 = 518;
	int p6 = 1941;
	FeudaliasBattle * obj = new FeudaliasBattle();
	clock_t start = clock();
	double my_answer = obj->getMinimumTime(p0, p1, p2, p3, p4, p5, p6);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p7 = 1.1111118724871378;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p7 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p7 != my_answer) {
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
