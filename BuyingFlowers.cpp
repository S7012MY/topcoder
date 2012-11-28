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

int bit(int i, int j) {
	return ((i>>j) &1);
}
#define MULT (1<<30)
struct BuyingFlowers {
	int buy(vector <int> roses, vector <int> lilies) {
		int rez=MULT,n=roses.size(),sr,sl;
		for(int i=1; i<(1<<n); ++i) {
			sl=sr=0;
			for(int j=0; j<n; ++j) if(bit(i,j)) sr+=roses[j],sl+=lilies[j];
			int sum=sl+sr;
			if(abs(sl-sr)>1) continue;
			for(int i=1; i<=160000; ++i) {
				int j=sum/i;
				if(i*j==sum && j!=0) rez=min(rez,abs(i-j));
			}
		}
		if(rez!=MULT) return rez;
		else return -1;
	}
};


double test0() {
	int t0[] = {2, 4};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {4, 2};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	BuyingFlowers * obj = new BuyingFlowers();
	clock_t start = clock();
	int my_answer = obj->buy(p0, p1);
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
	int t0[] = {2, 7, 3};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {3, 4, 1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	BuyingFlowers * obj = new BuyingFlowers();
	clock_t start = clock();
	int my_answer = obj->buy(p0, p1);
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
double test2() {
	int t0[] = {4, 5, 2, 1};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {6, 10, 5, 9};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	BuyingFlowers * obj = new BuyingFlowers();
	clock_t start = clock();
	int my_answer = obj->buy(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = -1;
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
	int t0[] = {1, 208, 19, 0, 3, 234, 1, 106, 99, 17};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {58, 30, 3, 5, 0, 997, 9, 615, 77, 5};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	BuyingFlowers * obj = new BuyingFlowers();
	clock_t start = clock();
	int my_answer = obj->buy(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 36;
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
