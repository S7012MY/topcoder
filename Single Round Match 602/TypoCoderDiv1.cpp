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

int bst[55][5555],valid[55][5555];

struct TypoCoderDiv1 {
    int getmax(vector<int> D, int X) {
        memset(bst,0,sizeof(bst));
        memset(valid,0,sizeof(bst));
        valid[0][X]=1;
        int rez=0;
        for(int i=0; i<D.size(); ++i) for(int j=0; j<2200; ++j) if(valid[i][j]) {
            if(j+D[i]<2200) {
                valid[i+1][j+D[i]]=1;
                bst[i+1][j+D[i]]=max(bst[i+1][j+D[i]],bst[i][j]);
            }else {
                if(i==D.size()-1) {
                    valid[i+1][2200]=1;
                    bst[i+1][2200]=max(bst[i+1][2200],bst[i][j]+1);
                }else if(j+D[i]-D[i+1]<2200) {
                    int sum=max(0,j+D[i]-D[i+1]);
                    valid[i+2][sum]=1;
                    bst[i+2][sum]=max(bst[i+2][sum],bst[i][j]+2);
                }
            }
            int sum=max(0,j-D[i]);
            valid[i+1][sum]=1;
            bst[i+1][sum]=max(bst[i+1][sum],bst[i][j]);
        }
        for(int i=0; i<=2200; ++i) if(valid[D.size()][i]) rez=max(rez,bst[D.size()][i]);
        return rez;
    }
};

// CUT begin
ifstream data("TypoCoderDiv1.sample");

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

bool do_test(vector<int> D, int X, int __expected) {
    time_t startClock = clock();
    TypoCoderDiv1 *instance = new TypoCoderDiv1();
    int __result = instance->getmax(D, X);
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
        vector<int> D;
        from_stream(D);
        int X;
        from_stream(X);
        next_line();
        int __answer;
        from_stream(__answer);

        cases++;
        if (case_set.size() > 0 && case_set.find(cases - 1) == case_set.end())
            continue;

        cout << "  Testcase #" << cases - 1 << " ... ";
        if ( do_test(D, X, __answer)) {
            passed++;
        }
    }
    if (mainProcess) {
        cout << endl << "Passed : " << passed << "/" << cases << " cases" << endl;
        int T = time(NULL) - 1388251295;
        double PT = T / 60.0, TT = 75.0;
        cout << "Time   : " << T / 60 << " minutes " << T % 60 << " secs" << endl;
        cout << "Score  : " << 250 * (0.3 + (0.7 * TT * TT) / (10.0 * PT * PT + TT * TT)) << " points" << endl;
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
        cout << "TypoCoderDiv1 (250 Points)" << endl << endl;
    }
    return run_test(mainProcess, cases, argv[0]);
}
// CUT end
