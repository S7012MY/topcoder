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

struct RabbitVoting {
	string getWinner(vector <string> names, vector <string> votes) {
		string rez;
		map<string, int> vot;
		int vmax=0,nrm=0;
		string win;
		for(int i=0; i<names.size(); ++i) {
			if(names[i].compare(votes[i])==0) continue;
			if(vot.find(votes[i])==vot.end()) {
				vot[votes[i]]=1;
			}else ++vot[votes[i]];
			if(vot[votes[i]]>vmax) {
				vmax=vot[votes[i]];
				win=votes[i];
				nrm=1;
			}else if(vot[votes[i]]==vmax) ++nrm;
		}
		if(nrm==1) return win;
		return rez;
	}
};


double test0() {
	string t0[] = { "Alice", "Bill", "Carol", "Dick" };
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = { "Bill", "Dick", "Alice", "Alice" };
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	RabbitVoting * obj = new RabbitVoting();
	clock_t start = clock();
	string my_answer = obj->getWinner(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "Alice";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	string t0[] = { "Alice", "Bill", "Carol", "Dick" };
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = { "Carol", "Carol", "Bill", "Bill" };
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	RabbitVoting * obj = new RabbitVoting();
	clock_t start = clock();
	string my_answer = obj->getWinner(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	string t0[] = { "Alice", "Bill", "Carol", "Dick" };
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = { "Alice", "Alice", "Bill", "Bill" };
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	RabbitVoting * obj = new RabbitVoting();
	clock_t start = clock();
	string my_answer = obj->getWinner(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "Bill";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	string t0[] = { "Alice", "Bill" };
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = { "Alice", "Bill" };
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	RabbitVoting * obj = new RabbitVoting();
	clock_t start = clock();
	string my_answer = obj->getWinner(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	string t0[] = { "WhiteRabbit", "whiterabbit", "whiteRabbit", "Whiterabbit" };
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = { "whiteRabbit", "whiteRabbit", "whiteRabbit", "WhiteRabbit" };
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	RabbitVoting * obj = new RabbitVoting();
	clock_t start = clock();
	string my_answer = obj->getWinner(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "whiteRabbit";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
