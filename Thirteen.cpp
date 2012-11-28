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

queue<int> c;
int dist[55];
bitset<55> viz;

struct Thirteen {
	int getc(char c) {
		if(isupper(c)) return c-'A'+1;
		else return c-'a'+27;
	}
	int calcTime(vector <string> city) {
		int n=city.size();
		//cout<<getc('A');
		for(int i=1; i<n; ++i) dist[i]=-1;
		for(c.push(0);c.size(); c.pop()) {
			int fr=c.front();
			viz[fr]=1;
			for(int i=0; i<n; ++i) if(city[fr][i]!='#' && (dist[fr]+getc(city[fr][i]))%13!=0 && (dist[i]==-1 || dist[i]>dist[fr]+getc(city[fr][i])%13)) {
				dist[i]=dist[fr]+getc(city[fr][i]);
				if(0==viz[i]) {
					viz[i]=1;
					c.push(i);
				}
			}
		}
				
		return dist[n-1];
	}
};


double test0() {
	string t0[] = { "#AB##",
  "###A#",
  "###C#",
  "####K",
  "#####" };
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	Thirteen * obj = new Thirteen();
	clock_t start = clock();
	int my_answer = obj->calcTime(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 16;
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
	string t0[] = { "#Z",
  "Z#" };
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	Thirteen * obj = new Thirteen();
	clock_t start = clock();
	int my_answer = obj->calcTime(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = -1;
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
	string t0[] = { "#A#C##",
  "##FA#K",
  "###D#D",
  "A###A#",
  "##C###",
  "####A#" };
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	Thirteen * obj = new Thirteen();
	clock_t start = clock();
	int my_answer = obj->calcTime(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 10;
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
	string t0[] = { "Good#####",
  "#Luck####",
  "##and####",
  "##Have###",
  "####Fun##",
  "#####in##",
  "#####the#",
  "CHALLENGE",
  "##PHASE##" };
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	Thirteen * obj = new Thirteen();
	clock_t start = clock();
	int my_answer = obj->calcTime(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 137;
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
	string t0[] = { "###No#####",
  "####Zaphod",
  "#####Just#",
  "######very",
  "####very##",
  "improbable",
  "##########",
  "##########",
  "##########",
  "##########" };
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	Thirteen * obj = new Thirteen();
	clock_t start = clock();
	int my_answer = obj->calcTime(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 103;
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
