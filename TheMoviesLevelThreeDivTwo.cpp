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

bool x1[22],x2[22];
queue<per> q1,q2;

struct TheMoviesLevelThreeDivTwo {
	int find(vector <int> a1, vector <int> a2) {
		int n = a1.size();
  int ret = 0;
  for (int i = 0; i < (1 << n); i++)
  {
    for (int j = 0; j < n; j++) if (i & (1 << j)) q1.push(make_pair(j,0)); else q2.push(make_pair(j,0));
    int t1 = 0,t2 = 0;
    memset(x1,true,sizeof(x1));
    memset(x2,true,sizeof(x2));
    int left1 = n,left2 = n;
    while (!q1.empty() || !q2.empty())
    {
      //Could not review
      while (!q1.empty() && t1 < q1.front().second) q1.pop();
      pair<int,int> pp;
      if (!q1.empty())
      {
        pp = q1.front();  q1.pop();
        x1[pp.first] = false;  left1--;  t1 += a1[pp.first];
        if (x2[pp.first]) q2.push(make_pair(pp.first,t1));
      };      
      while (!q2.empty() && t2 < q2.front().second) q2.pop();
      if (!q2.empty())
      {  
        pp = q2.front();  q2.pop();
        x2[pp.first] = false;  left2--;  t2 += a2[pp.first];
        if (x1[pp.first]) q1.push(make_pair(pp.first,t2));
      };
    };
    if (!left1 && !left2) ret++;
  };
  return ret; 
  }
};


double test0() {
	int t0[] = {4, 4};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {4, 4};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	TheMoviesLevelThreeDivTwo * obj = new TheMoviesLevelThreeDivTwo();
	clock_t start = clock();
	int my_answer = obj->find(p0, p1);
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
double test1() {
	int t0[] = {1, 4};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {4, 2};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	TheMoviesLevelThreeDivTwo * obj = new TheMoviesLevelThreeDivTwo();
	clock_t start = clock();
	int my_answer = obj->find(p0, p1);
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
double test2() {
	int t0[] = {10, 10, 10, 10};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {1, 1, 1, 10};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	TheMoviesLevelThreeDivTwo * obj = new TheMoviesLevelThreeDivTwo();
	clock_t start = clock();
	int my_answer = obj->find(p0, p1);
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
double test3() {
	int t0[] = {1, 2, 3, 4, 5, 6, 7};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {7, 6, 5, 4, 3, 2, 1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	TheMoviesLevelThreeDivTwo * obj = new TheMoviesLevelThreeDivTwo();
	clock_t start = clock();
	int my_answer = obj->find(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 98;
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
