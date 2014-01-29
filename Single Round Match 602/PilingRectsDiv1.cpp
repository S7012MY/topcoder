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
using namespace std;

typedef pair<int, int> per; 
typedef vector<int>::iterator it; 
typedef set<int>::iterator is; 

struct PilingRectsDiv1 {
    long long getmax(int N, vector<int> XS, vector<int> YS, int XA, int XB, int XC, int YA, int YB, int YC) {
	   long long rez=0;
       return rez;
    }
};

// CUT begin
ifstream data("PilingRectsDiv1.sample");

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

bool do_test(int N, vector<int> XS, vector<int> YS, int XA, int XB, int XC, int YA, int YB, int YC, long long __expected) {
    time_t startClock = clock();
    PilingRectsDiv1 *instance = new PilingRectsDiv1();
    long long __result = instance->getmax(N, XS, YS, XA, XB, XC, YA, YB, YC);
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
        vector<int> XS;
        from_stream(XS);
        vector<int> YS;
        from_stream(YS);
        int XA;
        from_stream(XA);
        int XB;
        from_stream(XB);
        int XC;
        from_stream(XC);
        int YA;
        from_stream(YA);
        int YB;
        from_stream(YB);
        int YC;
        from_stream(YC);
        next_line();
        long long __answer;
        from_stream(__answer);

        cases++;
        if (case_set.size() > 0 && case_set.find(cases - 1) == case_set.end())
            continue;

        cout << "  Testcase #" << cases - 1 << " ... ";
        if ( do_test(N, XS, YS, XA, XB, XC, YA, YB, YC, __answer)) {
            passed++;
        }
    }
    if (mainProcess) {
        cout << endl << "Passed : " << passed << "/" << cases << " cases" << endl;
        int T = time(NULL) - 1388251935;
        double PT = T / 60.0, TT = 75.0;
        cout << "Time   : " << T / 60 << " minutes " << T % 60 << " secs" << endl;
        cout << "Score  : " << 550 * (0.3 + (0.7 * TT * TT) / (10.0 * PT * PT + TT * TT)) << " points" << endl;
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
        cout << "PilingRectsDiv1 (550 Points)" << endl << endl;
    }
    return run_test(mainProcess, cases, argv[0]);
}
// CUT end
