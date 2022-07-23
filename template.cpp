#include <bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

#define PB push_back
#define ALL(i_) i_.begin(), i_.end()
#define LOG2(x) (31 - __builtin_clz(x))
#define getBit(x, i) ((x >> i) & 1)
#define rd(l, r) (l + rng() % (r - l + 1))

typedef long long ll;
typedef long double ld;
typedef pair<int, int> ii;

template<class X, class Y> bool minimize(X &x, const Y &y){
    X eps = 1e-9;
    if (x > y + eps) {
        x = y;
        return 1;
    }
    return 0;
}

template<class X, class Y> bool maximize(X &x, const Y &y) {
    X eps = 1e-9;
    if (x + eps < y) {
        x = y;
        return 1;
    }
    return 0;
}

template<class T> T Abs(const T &x) { return (x < 0 ? -x : x); }

const int mod = (int) 1e9 + 7;
const int oo = (int) 1e9 + 99;
const int maxn = (int) 1e5 + 11;
const int LOG = (int) 20;



int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #define TASK ""
    if(fopen(TASK".inp", "r")) {
        freopen(TASK".inp", "r", stdin);
        freopen(TASK".out", "w", stdout);
    }

    return 0;
}
