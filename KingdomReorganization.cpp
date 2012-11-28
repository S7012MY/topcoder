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
#define DN  55

int pre[DN],a[DN],b[DN],c[DN],ind[DN],ca[DN],cb[DN],cc[DN];

bool cmp(const int &a, const int &b) {
	return c[a]<c[b];
}

bool cmp2(const int &a, const int &b) {
	if(0==c[a]) return 1;
	return c[a]>c[b];
}

int find(int n) {
    if(pre[n]==n) return n;
    pre[n]=find(pre[n]);
    return pre[n];
}

void unite(int i, int j) {
    pre[find(i)]=find(j);
}

struct KingdomReorganization {
	int getCost(vector <string> kingdom, vector <string> build, vector <string> destroy) {
		int rez=0,n=kingdom.size();
		for(int i=0; i<=n; ++i) pre[i]=i;
		int nrm=0,sz=0;
		for(int i=0; i<n; ++i) for(int j=i+1; j<n; ++j)
			if(kingdom[i][j]=='1') {
				a[++nrm]=i; b[nrm]=j;
				ca[++sz]=i; cb[++sz]=j;
				if(isupper(destroy[i][j])) cc[nrm]=build[i][j]-'A';
				else cc[nrm]=destroy[i][j]-'a'+26;
			}else {
				a[++nrm]=i; b[nrm]=j; 
				if(isupper(build[i][j])) c[nrm]=build[i][j]-'A';
				else c[nrm]=build[i][j]-'a'+26;
			}
		for(int i=1; i<=nrm; ++i) ind[i]=i;
		sort(ind+1,ind+nrm+1,cmp);
		for(int i=1; i<=nrm; ++i)
       	    if(find(a[ind[i]])!=find(b[ind[i]])){
                rez+=c[ind[i]];
                unite(a[ind[i]],b[ind[i]]);
                if(c[ind[i]]) {
                	cc[++sz]=0;
                	ca[sz]=a[ind[i]];
                	cb[sz]=b[ind[i]];
                }
            }
        for(int i=1; i<=sz; ++i) {
        	a[i]=ca[i];
        	b[i]=cb[i];
        	c[i]=cc[i];
        	cout<<a[i]<<' '<<b[i]<<' '<<c[i]<<'\n';
        	ind[i]=i;
        }
        //for(int i=0; i<=n; ++i) pre[i]=i;
        sort(ind+1,ind+sz+1,cmp2);
        for(int i=1; i<=nrm; ++i)
       	    if(find(a[ind[i]])==find(b[ind[i]])){
                rez+=c[ind[i]];
                unite(a[ind[i]],b[ind[i]]);
            /*}else {
            	rez+=c[ind[i]];
            }*/
		return rez;
	}
};


double test0() {
	string t0[] = {"000","000","000"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"ABD","BAC","DCA"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	string t2[] = {"ABD","BAC","DCA"};
	vector <string> p2(t2, t2+sizeof(t2)/sizeof(string));
	KingdomReorganization * obj = new KingdomReorganization();
	clock_t start = clock();
	int my_answer = obj->getCost(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 3;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	string t0[] = {"011","101","110"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"ABD","BAC","DCA"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	string t2[] = {"ABD","BAC","DCA"};
	vector <string> p2(t2, t2+sizeof(t2)/sizeof(string));
	KingdomReorganization * obj = new KingdomReorganization();
	clock_t start = clock();
	int my_answer = obj->getCost(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 1;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	string t0[] = {"011000","101000","110000","000011","000101","000110"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"ABDFFF","BACFFF","DCAFFF","FFFABD","FFFBAC","FFFDCA"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	string t2[] = {"ABDFFF","BACFFF","DCAFFF","FFFABD","FFFBAC","FFFDCA"};
	vector <string> p2(t2, t2+sizeof(t2)/sizeof(string));
	KingdomReorganization * obj = new KingdomReorganization();
	clock_t start = clock();
	int my_answer = obj->getCost(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 7;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	string t0[] = {"0"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"A"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	string t2[] = {"A"};
	vector <string> p2(t2, t2+sizeof(t2)/sizeof(string));
	KingdomReorganization * obj = new KingdomReorganization();
	clock_t start = clock();
	int my_answer = obj->getCost(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 0;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	string t0[] = {"0001","0001","0001","1110"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"AfOj","fAcC","OcAP","jCPA"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	string t2[] = {"AWFH","WAxU","FxAV","HUVA"};
	vector <string> p2(t2, t2+sizeof(t2)/sizeof(string));
	KingdomReorganization * obj = new KingdomReorganization();
	clock_t start = clock();
	int my_answer = obj->getCost(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 0;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test5() {
	string t0[] = {"0000000000","0000000011","0001010000","0010010000","0000001000","0011000000","0000100000","0000000011","0100000101","0100000110"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	string t1[] = {"AhPEqkSFMM","hAfKPtsDad","PfAyGQkaqN","EKyAeLpRpm","qPGeASfNwo","ktQLSAnCAK","SskpfnAdJS","FDaRNCdAZz","MaqpwAJZAn","MdNmoKSznA"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	string t2[] = {"AgTqWWxEYH","gAXPgjzIRA","TXAleTmWvT","qPlAQkwxRO","WgeQAqgbJJ","WjTkqAiTzl","xzmwgiAuHb","EIWxbTuAwk","YRvRJzHwAn","HATOJlbknA"};
	vector <string> p2(t2, t2+sizeof(t2)/sizeof(string));
	KingdomReorganization * obj = new KingdomReorganization();
	clock_t start = clock();
	int my_answer = obj->getCost(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 65;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
