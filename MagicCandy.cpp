#include <vector>
#include <list>
#include <map>
#include <set>
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
#define LL long long
using namespace std;
 
typedef pair<int, int> per;
typedef vector<int>::iterator it;
typedef set<int>::iterator is;
 
set<LL> pp;
 
struct MagicCandy {
  int ispp(int n) {
    double sq=sqrt((double)n);
    if(sq-(int)sq==0) return 1;
    return 0;
  }
  int whichOne(int n) {
    int rez,dif=1,prez=1;
    for(int i=1; 1LL*i*i<=2000000005LL; ++i) pp.insert(1LL*i*i);
    for(rez=2; rez<=n; rez+=dif) {
      if(*pp.lower_bound(rez)<=rez+dif && pp.lower_bound(rez)!=pp.end()) ++dif;
      prez=rez;
      //cout<<prez<<' '<<rez<<' '<<dif<<'\n'; 
    }
    return prez;
  }
};
