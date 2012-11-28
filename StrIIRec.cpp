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
 
int am[30];
 
struct StrIIRec {
  string recovstr(int n, int minInv, string minStr) {
    string rez=minStr,notsol,ret;
    for(int i=0; i<minStr.size(); ++i) ++am[minStr[i]-'a'];
    for(int i=0; rez.size()<n && i<26; ++i) if(!am[i]) rez+=(i+'a');
    for(int i=rez.size()-1; i>=-1; --i) {
      int nrinv=0;
      for(int j=0; j<max(i,0); ++j) for(int k=0; k<j; ++k) if(rez[j]<rez[k]) ++nrinv;
      for(int j=i+1; j<rez.size(); ++j) for(int k=0; k<=i; ++k) if(rez[j]<rez[k]) ++nrinv;
      int lg=n-i-1;
      nrinv+=((lg*(lg-1))/2);
      if(nrinv<minInv) continue;
      cout<<i<<'\n';
      memset(am,0,sizeof(am));
        for(int j=0; j<n; ++j)
          if(j<=i){
            ret+=rez[j];
            am[rez[i]-'a']=1;
          }else ret+='a';
      cout<<ret;
      for(int j=i+1; j<n; ++j) {
        //cout<<j<<' '<<ret<<'\n';
        for(char c='a'; c<='z'; ++c) if(!am[c-'a']) {
          nrinv=0;
          am[c-'a']=1;
          ret[j]=c;
          //cout<<ret;
          for(int k=0; k<=j; ++k) for(int l=0; l<k; ++l) if(ret[k]<ret[l]) ++nrinv;
          for(char cc='a'; cc<='z'; ++cc) if(!am[cc-'a'] && cc-'a'<n-1) for(int k=0; k<=j; ++k) if(cc<ret[k]) ++nrinv;
          lg=n-j-1;
          nrinv+=((lg*(lg-1))/2);
          cout<<j<<' '<<c<<' '<<nrinv<<'\n';
          if(nrinv>=minInv) break;
          am[c-'a']=0;
        }
      }
      return ret;
      
    }
    return notsol;
  }
};
 
 
//Powered by [KawigiEdit] 2.0!
