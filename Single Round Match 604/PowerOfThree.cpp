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

// 100110012
// 221001000
//1021111012

//001
//100

struct PowerOfThree {
    string conv(int n) {
        string r;
        for(;n;n/=3) r+=(n%3)+'0';
        r+='0';
        return r;
    }
    string ableToGet(int x, int y) {
	   string rez="Possible";
       x=abs(x); y=abs(y);
       bitset<55> fol;
       string a=conv(x),b=conv(y);
       int am2=-1;
       for(int i=0; i<a.size(); ++i) {
            if(a[i]=='2') {
                if(am2==-1) am2=i;
            }
            if(a[i]=='1') fol[i]=1;
            if(a[i]=='0' && am2!=-1) {
                fol[am2]=1;
                am2=-1;
                fol[i]=1;
            }
       }

       for(int i=0; i<b.size(); ++i) {
            if(b[i]=='2') {
                if(am2==-1) am2=i;
            }
            if(b[i]=='1') {
                if(fol[i]) return "Impossible";
                fol[i]=1;
            }
            if(b[i]=='0' && am2!=-1) {
                if(fol[i] || fol[am2]) return "Impossible";
                fol[am2]=1;
                am2=-1;
                fol[i]=1;
            }
       }
       for(int i=1; i<50; ++i) if(fol[i] && !fol[i-1]) return "Impossible";

       return rez;
    }
};

// CUT begin
ifstream data("PowerOfThree.sample");

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

bool do_test(int x, int y, string __expected) {
    time_t startClock = clock();
    PowerOfThree *instance = new PowerOfThree();
    string __result = instance->ableToGet(x, y);
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
        int x;
        from_stream(x);
        int y;
        from_stream(y);
        next_line();
        string __answer;
        from_stream(__answer);

        cases++;
        if (case_set.size() > 0 && case_set.find(cases - 1) == case_set.end())
            continue;

        cout << "  Testcase #" << cases - 1 << " ... ";
        if ( do_test(x, y, __answer)) {
            passed++;
        }
    }
    if (mainProcess) {
        cout << endl << "Passed : " << passed << "/" << cases << " cases" << endl;
        int T = time(NULL) - 1389459607;
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
        cout << "PowerOfThree (250 Points)" << endl << endl;
    }
    return run_test(mainProcess, cases, argv[0]);
}
// CUT end
