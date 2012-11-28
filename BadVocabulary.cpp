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

struct BadVocabulary {
	int count(string badPrefix, string badSuffix, string badSubstring, vector <string> v) {
		int rez=0,n=v.size(),ds=badSuffix.size();
		for(int i=0; i<n; ++i) {
			int ic=0,ok=0;
			for(int j=1; j<v[i].size()-1; ++j) {
				if(v[i][j]==badSubstring[ic]) ++ic;
				else ic=0;
				if(ic==badSubstring.size()) {
					ok=1;
					++rez;
					break;
				}
			}
			if(ok) continue;
			int j,k;
			for(j=0; j<badPrefix.size() && j<v[i].size() && badPrefix[j]==v[i][j]; ++j);
			if(j==badPrefix.size()) {
				++rez;
				continue;
			}
			for(j=ds-1,k=v[i].size()-1; k>=0 && j>=0 && badSuffix[j]==v[i][k]; --j,--k);
			if(-1==j) {
				++rez;
				continue;
			}
		}
		return rez;
	}
};


double test0() {
	string p0 = "bug";
	string p1 = "bug";
	string p2 = "bug";
	string t3[] = {"buggy", "debugger", "debug"};
	vector <string> p3(t3, t3+sizeof(t3)/sizeof(string));
	BadVocabulary * obj = new BadVocabulary();
	clock_t start = clock();
	int my_answer = obj->count(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p4 = 3;
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
	string p0 = "a";
	string p1 = "b";
	string p2 = "c";
	string t3[] = {"a", "b", "tco"};
	vector <string> p3(t3, t3+sizeof(t3)/sizeof(string));
	BadVocabulary * obj = new BadVocabulary();
	clock_t start = clock();
	int my_answer = obj->count(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p4 = 3;
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
	string p0 = "cut";
	string p1 = "sore";
	string p2 = "scar";
	string t3[] = {"scary", "oscar"};
	vector <string> p3(t3, t3+sizeof(t3)/sizeof(string));
	BadVocabulary * obj = new BadVocabulary();
	clock_t start = clock();
	int my_answer = obj->count(p0, p1, p2, p3);
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
double test3() {
	string p0 = "bar";
	string p1 = "else";
	string p2 = "foo";
	string t3[] = {"foofoofoo", "foobar", "elsewhere"};
	vector <string> p3(t3, t3+sizeof(t3)/sizeof(string));
	BadVocabulary * obj = new BadVocabulary();
	clock_t start = clock();
	int my_answer = obj->count(p0, p1, p2, p3);
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
double test4() {
	string p0 = "pre";
	string p1 = "s";
	string p2 = "all";
	string t3[] = {"all", "coders", "be", "prepared", "for", "the", "challenge", "phase"};
	vector <string> p3(t3, t3+sizeof(t3)/sizeof(string));
	BadVocabulary * obj = new BadVocabulary();
	clock_t start = clock();
	int my_answer = obj->count(p0, p1, p2, p3);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p4 = 3;
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
