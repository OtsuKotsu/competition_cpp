#include <bits/stdc++.h>

#define debug(x) cout <<"DEBUG "<< #x << ": " << (x) << '\n'
#define rep(i,n) for(int_fast32_t i = 0; i < ((int_fast32_t)(n)); i++)   // 0-indexed up
#define rep1(i,n) for(int_fast32_t i = 1; i <= ((int_fast32_t)(n)); i++) // 1-indexed up
#define rrep(i,n) for(int_fast32_t i = ((int_fast32_t)(n)-1); i >= 0; i--)  // 0-indexed down
#define rrep1(i,n) for(int_fast32_t i = ((int_fast32_t)(n)); i >= 1; i--)   // 1-indexed down
#define all(x) (x).begin(),(x).end()

using namespace std;

template<typename T>
using vec = vector<T>;
using i32 = int_fast32_t;
using i64 = int_fast64_t;
using u32 = uint_fast32_t;
using u64 = uint_fast64_t;
using ll = long long;
using ld = long double;
using vi = vec<int_fast32_t>;
using vl = vec<int_fast64_t>;
using vld = vec<ld>;
using vvi = vec<vi>;
using PII = pair<int_fast32_t, int_fast32_t>;

template<class T>
using maxheap = std::priority_queue<T>;
template<class T>
using minheap = std::priority_queue<T, std::vector<T>, std::greater<T>>;

template<class T,class U>
inline bool chmax(T &a, const U &b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}
template<class T,class U>
inline bool chmin(T &a, const U &b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

// ostream expension
template <class T, class U>
std::ostream& operator<<(std::ostream& os, const std::pair<T, U>& p) {
    os << "(" << p.first << ", " << p.second << ")";
    return os;
}

template <class T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& v) {
    os << "[";
    for(i32 i = 0; i < v.size(); ++i) {
        os << (i ? ", " : "") << v[i];
    }
    os << "]";
    return os;
}

const ld Pi = std::acos(-1.0L);
constexpr ll infll = (1LL<<62)-1;
constexpr int inf = (1<<30)-1;


/* Class & Function */


/* Main */
signed main() {
    double StartTimeOfMainFunction = clock();

    // fast io
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    // cout << fixed << setprecision(15);  // fix io precision



    // printf("Elapsed time: %5.3f ms\n",1000.*((clock()-StartTimeOfMainFunction)/CLOCKS_PER_SEC));
}
