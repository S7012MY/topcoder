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
#define DN 55
#define DNN 55*55
#define MOD 1000000007
using namespace std;

typedef pair<int, int> per; 
typedef vector<int>::iterator it; 
typedef set<int>::iterator is; 

int npos[3000][3000];

struct WinterAndSnowmen {
    int getNumber(int N, int M) {
	   int rez=0,xmax=0;
       memset(npos,0,sizeof(npos));
       npos[0][0]=1;
        for(int x1=0; x1<2050; ++x1)
            for(int x2=0; x2<2050; ++x2) for(int i=1; i<=min(N,M); ++i){
                npos[x1^i][x2]+=npos[x1][x2];
                npos[x1][x2^i]+=npos[x1][x2];
                if(npos[x1^i][x2]>=MOD) npos[x1^i][x2]-=MOD;
                if(npos[x1][x2^i]>=MOD) npos[x1][x2^i]-=MOD;
            }
        for(int x1=0; x1<2050; ++x1)
            for(int x2=0; x2<2050; ++x2) for(int i=min(N,M)+1; i<=max(N,M); ++i)
                if(N<M) {
                    npos[x1][x2^i]+=npos[x1][x2];
                    if(npos[x1][x2^i]>=MOD) npos[x1][x2^i]-=MOD;
                }
                else {
                    npos[x1^i][x2]+=npos[x1][x2];
                    if(npos[x1^i][x2]>=MOD) npos[x1^i][x2]-=MOD;
                }
        for(int x1=0; x1<2050; ++x1) for(int x2=x1+1; x2<2050; ++x2) {
            rez+=npos[x1][x2];
            if(rez>=MOD) rez-=MOD;
        }
       return rez;
    }
};

// CUT begin
ifstream data("WinterAndSnowmen.sample");

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

template <typename T>
string to_string(T t) {
    stringstream s;
    s << t;
    return s.str();
}

string to_string(string t) {
    return "\"" + t + "\"";
}

bool do_test(int N, int M, int __expected) {
    time_t startClock = clock();
    WinterAndSnowmen *instance = new WinterAndSnowmen();
    int __result = instance->getNumber(N, M);
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
        int N;
        from_stream(N);
        int M;
        from_stream(M);
        next_line();
        int __answer;
        from_stream(__answer);

        cases++;
        if (case_set.size() > 0 && case_set.find(cases - 1) == case_set.end())
            continue;

        cout << "  Testcase #" << cases - 1 << " ... ";
        if ( do_test(N, M, __answer)) {
            passed++;
        }
    }
    if (mainProcess) {
        cout << endl << "Passed : " << passed << "/" << cases << " cases" << endl;
        int T = time(NULL) - 1387733217;
        double PT = T / 60.0, TT = 75.0;
        cout << "Time   : " << T / 60 << " minutes " << T % 60 << " secs" << endl;
        cout << "Score  : " << 500 * (0.3 + (0.7 * TT * TT) / (10.0 * PT * PT + TT * TT)) << " points" << endl;
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
        cout << "WinterAndSnowmen (500 Points)" << endl << endl;
    }
    return run_test(mainProcess, cases, argv[0]);
}
// CUT end
