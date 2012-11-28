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
 
long long rez[55],szr;
 
struct Suminator {
  int findMissing(vector <int> p, int wantedResult) {
    int pm1=0;
    for(int i=0; i<p.size(); ++i)
      if(p[i]>0) rez[++szr]=p[i];
      else {
        if(szr>1) {
          rez[szr-1]+=rez[szr];
          --szr;
        }
        if(p[i]==-1) pm1=i;
      }
    if(rez[szr]==wantedResult) return 0;
    long long ls=1,ld=1000000000;
    for(;ls<=ld;) {
      long long m=(ls+ld)/2LL;
      p[pm1]=m;
      for(int i=0; i<p.size(); ++i)
        if(p[i]>0) rez[++szr]=p[i];
        else {
          if(szr>1) {
            rez[szr-1]+=rez[szr];
            --szr;
          }
        }
      if(rez[szr]==wantedResult) return m;
      else if(rez[szr]<wantedResult) ls=m+1;
      else ld=m-1;
    }
    cout<<rez[szr];
    return -1;
  }
};
 
 
//Powered by [KawigiEdit] 2.0!
 
 
 
 
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!
