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

int fr[55],fri[55];;

struct AppleWord {
	int minRep(string word) {
		if(word.size()<5) return -1;
		int rez=0,fa,fp,sp,fl,fe;
		fa=fp=sp=fl=fe=-1;
		for(int i=0; i<word.size(); ++i) ++fr[tolower(word[i])-'a'];
		for(int i=0; i<word.size(); ++i) {
			if(-1==fa && tolower(word[i])=='a') fa=i;
			else if(-1!=fa && tolower(word[i])=='p') {
				if(-1!=fp) sp=i;
				else fp=i;
			}
			else if(-1!=sp && -1==fl && tolower(word[i])=='l') fl=i;
			else if(-1!=fl && -1==fe && tolower(word[i])=='e') fe=i;
		}
		int obt=0;
		for(int i=0; i<word.size(); ++i) {
			if(i==fa || i==fp || i==sp || i==fl || i==fe) ++obt;
			else if(tolower(word[i])=='p' && i>sp) ++obt;
		}
		return word.size()-obt+rez;
	}
};
//aDFqpPjTWAPpmLppxupjPZPqpapbq


//Powered by [KawigiEdit] 2.0!
