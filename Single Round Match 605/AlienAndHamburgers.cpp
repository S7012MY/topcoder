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
#define VL 100000
using namespace std;

typedef pair<int, int> per; 
typedef vector<int>::iterator it; 
typedef set<int>::iterator is; 

int nrt[2][10000005];

struct AlienAndHamburgers {
    int getNumber(vector<int> type, vector<int> taste) {
	   int rez=0;
       //memset(nrt,0,sizeof(nrt));
       vector<per> v;
       vector<int> maxsums;
       v.push_back(make_pair(-1000,0));
       for(int i=0; i<type.size(); ++i) v.push_back(make_pair(type[i],taste[i]));
        v.push_back(make_pair(1000,0));
        sort(v.begin(), v.end());
        int sum=0,sc;
        for(int i=1; i<v.size(); ++i) {
            if(v[i].x!=v[i-1].x) {
                if(sum) maxsums.push_back(sum);
                sc=v[i].y;
                sum=sc;
            }else {
                sc=max(sc+v[i].y,v[i].y);
                sum=max(sum,sc);
            }
            
        }
        sort(maxsums.rbegin(),maxsums.rend());
        sum=0;
        for(int i=0; i<maxsums.size(); ++i) {
            sum+=maxsums[i];
            //cout<<maxsums[i]<<' ';
            rez=max(rez,sum*(i+1));
        }
        for(int i=1; i<=50; ++i) cout<<"100000,";
       return rez;
    }
};

// CUT begin
ifstream data("AlienAndHamburgers.sample");

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

bool do_test(vector<int> type, vector<int> taste, int __expected) {
    time_t startClock = clock();
    AlienAndHamburgers *instance = new AlienAndHamburgers();
    int __result = instance->getNumber(type, taste);
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
        vector<int> type;
        from_stream(type);
        vector<int> taste;
        from_stream(taste);
        next_line();
        int __answer;
        from_stream(__answer);

        cases++;
        if (case_set.size() > 0 && case_set.find(cases - 1) == case_set.end())
            continue;

        cout << "  Testcase #" << cases - 1 << " ... ";
        if ( do_test(type, taste, __answer)) {
            passed++;
        }
    }
    if (mainProcess) {
        cout << endl << "Passed : " << passed << "/" << cases << " cases" << endl;
        int T = time(NULL) - 1390305613;
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
        cout << "AlienAndHamburgers (250 Points)" << endl << endl;
    }
    return run_test(mainProcess, cases, argv[0]);
}
// CUT end
