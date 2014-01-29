//#MLC
//#unitisalvam #comisia
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
#include <fstream>
#include <iomanip>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <ctime>
#define x first
#define y second
#define LL long long
#define EPS 1e-6
#define INF 1e+6
#define DN 2005
#define xx first
#define yy second
using namespace std;

typedef pair<int, int> per; 
typedef vector<int>::iterator it; 
typedef set<int>::iterator is; 

int n;
vector<per> sc,su;
vector<int> semn,x,y;
 
int edr(double a, double b, double c, double x, double y) {
    double d=a*x+b*y+c;
    if(d<-EPS) return -1;
    if(d>EPS) return 1;
    return 0;
}
 
double faec(double x1, double y1,double x2, double y2, double &a, double &b, double &c) {
    a=y1-y2;
    b=x2-x1;
    c=x1*y2-x2*y1;
}
 
per inters(double a1, double b1,double c1, per p1, per p2) {
    double a2,b2,c2;
    faec(p1.xx,p1.yy,p2.xx,p2.yy,a2,b2,c2);
    double det=a1*b2-a2*b1;
    if(fabs(det)<EPS) return make_pair(-INF,-INF);
    double x,y;
    x=(b1*c2-b2*c1)/det;
    y=(a2*c1-a1*c2)/det;
    return make_pair(x,y);
}
 
double solve() {
    sc.clear(); semn.clear();
    sc.push_back(make_pair(-INF,-INF));
    sc.push_back(make_pair(-INF,INF));
    sc.push_back(make_pair(INF,INF));
    sc.push_back(make_pair(INF,-INF));
 
    double a,b,c;
    for(int i=0; i<n; ++i) {
        su.clear();
        semn.resize(sc.size()+1);
        faec(x[i],y[i],x[i+1],y[i+1],a,b,c);
 
        for(int j=0; j<sc.size(); ++j)
            semn[j]=edr(a,b,c,sc[j].xx,sc[j].yy);
        semn[sc.size()]=semn[0];
        for(int j=0; j<sc.size(); ++j) {
            per nxt=sc[(j+1)%(int)sc.size()];
            if(semn[j]<=0 && semn[j+1]<=0)
                su.push_back(nxt);
            if(semn[j]<=0 && semn[j+1]>0)
                su.push_back(inters(a,b,c,sc[j],nxt));
            if(semn[j]>0 && semn[j+1]>0) continue;
            if(semn[j]>0 && semn[j+1]<=0) {
                su.push_back(inters(a,b,c,sc[j],nxt));
                su.push_back(nxt);
            }
        }
        sc=su;
    }
    sc.push_back(sc[0]);
    double ret=0;
    for(int i=0; i<sc.size()-1; ++i)
        ret+=sc[i].xx*sc[i+1].yy-sc[i+1].xx*sc[i].yy;
    return fabs(ret*0.5);
}

struct FamilyCrest {
    string canBeInfinite(vector<int> A, vector<int> B, vector<int> C, vector<int> D) {
        x.clear(); y.clear();
        for(int i=0; i<A.size(); ++i) {
            x.push_back(A[i]); x.push_back(C[i]);
            y.push_back(B[i]); y.push_back(D[i]);
        }
        n=x.size();
        double rez=solve();
        if(fabs(rez)<EPS) {
            for(int i=0,j=n;i<j;++i,--j) {
                swap(x[i],x[j]);
                swap(y[i],y[j]);
            }
            rez=solve();
        }
        if(rez<EPS) return "Infinite";
       return "Finite";
    }
};

// CUT begin
ifstream data("FamilyCrest.sample");

string next_line() {
    string s;
    getline(data, s);
    return s;
}

template <typename T> void from_stream(T &t) {
    stringstream ss(next_line());
    ss >> t;
}

void from_stream(string &s) {
    s = next_line();
}

template <typename T> void from_stream(vector<T> &ts) {
    int len;
    from_stream(len);
    ts.clear();
    for (int i = 0; i < len; ++i) {
        T t;
        from_stream(t);
        ts.push_back(t);
    }
}

template <typename T>
string to_string(T t) {
    stringstream s;
    s << t;
    return s.str();
}

string to_string(string t) {
    return "\"" + t + "\"";
}

bool do_test(vector<int> A, vector<int> B, vector<int> C, vector<int> D, string __expected) {
    time_t startClock = clock();
    FamilyCrest *instance = new FamilyCrest();
    string __result = instance->canBeInfinite(A, B, C, D);
    double elapsed = (double)(clock() - startClock) / CLOCKS_PER_SEC;
    delete instance;

    if (__result == __expected) {
        cout << "PASSED!" << " (" << elapsed << " seconds)" << endl;
        return true;
    }
    else {
        cout << "FAILED!" << " (" << elapsed << " seconds)" << endl;
        cout << "           Expected: " << to_string(__expected) << endl;
        cout << "           Received: " << to_string(__result) << endl;
        return false;
    }
}

int run_test(bool mainProcess, const set<int> &case_set, const string command) {
    int cases = 0, passed = 0;
    while (true) {
        if (next_line().find("--") != 0)
            break;
        vector<int> A;
        from_stream(A);
        vector<int> B;
        from_stream(B);
        vector<int> C;
        from_stream(C);
        vector<int> D;
        from_stream(D);
        next_line();
        string __answer;
        from_stream(__answer);

        cases++;
        if (case_set.size() > 0 && case_set.find(cases - 1) == case_set.end())
            continue;

        cout << "  Testcase #" << cases - 1 << " ... ";
        if ( do_test(A, B, C, D, __answer)) {
            passed++;
        }
    }
    if (mainProcess) {
        cout << endl << "Passed : " << passed << "/" << cases << " cases" << endl;
        int T = time(NULL) - 1389461750;
        double PT = T / 60.0, TT = 75.0;
        cout << "Time   : " << T / 60 << " minutes " << T % 60 << " secs" << endl;
        cout << "Score  : " << 1000 * (0.3 + (0.7 * TT * TT) / (10.0 * PT * PT + TT * TT)) << " points" << endl;
    }
    return 0;
}

int main(int argc, char *argv[]) {
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(2);
    set<int> cases;
    bool mainProcess = true;
    for (int i = 1; i < argc; ++i) {
        if ( string(argv[i]) == "-") {
            mainProcess = false;
        } else {
            cases.insert(atoi(argv[i]));
        }
    }
    if (mainProcess) {
        cout << "FamilyCrest (1000 Points)" << endl << endl;
    }
    return run_test(mainProcess, cases, argv[0]);
}
// CUT end
