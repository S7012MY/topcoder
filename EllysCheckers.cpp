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
 
int dp[2][1<<21];
 
int bit(int i, int j) {
  if(i&(1<<j))return 1;
  return 0;
}
 
struct EllysCheckers {
  int msk;
  
  void prt(int n) {
    for(int i=0; i<=20; ++i)
      if(bit(n,i)) cout<<1;
      else  cout<<0;
    //cout<<'\n';
  }
  
  int memo(int state,int pl) {
    if(dp[pl][state]!=-1) return dp[pl][state];
    for(int i=0; i<20; ++i) {
      if(bit(state,i) && 0==bit(state,i+1)) {
        int nxt=(state^(1<<i))|(1<<(i+1));
        nxt&=msk;
        int rez=memo(nxt,pl^1);
        //prt(state); cout<<' '; prt(nxt); cout<<' '<<rez<<'\n';
        if(!rez) {
          dp[pl][state]=1;
          return dp[pl][state];
        }
      }if(bit(state,i) && bit(state,i+1) && bit(state,i+2) && !bit(state,i+3)) {
        int nxt=(state^(1<<i))|(1<<(i+3));
        nxt&=msk;
        int rez=memo(nxt,pl^1);
        //prt(state); cout<<' '; prt(nxt); cout<<' '<<rez<<'\n';
        if(!rez) {
          dp[pl][state]=1;
          return dp[pl][state];
        }
      }
    }
    dp[pl][state]=0;
    return 0;
  }
  
  string getWinner(string b) {
    string rez;
    int n=b.size();
    int si=0;
 
    for(int i=0; i<2; ++i) for(int j=0; j<=(1<<20); ++j) dp[i][j]=-1;
    dp[0][0]=dp[1][0]=0;
    msk=(1<<(n-1))-1;
    for(int i=0; i<n; ++i) if('o'==b[i]) si|=(1<<i);
    si&=msk;
    if(memo(si,1)) return "YES";
    return "NO";
  }
};
 
 
//Powered by [KawigiEdit] 2.0!
