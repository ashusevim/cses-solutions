#include <bits/stdc++.h>
using namespace std;

// Type definitions for convenience
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

// Macros for common operations
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define REPR(i, a, b) for (int i = a; i >= b; i--)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

// Constants
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LLINF = 1e18;
const double EPS = 1e-9;

// Debug template
template<typename T>
void debug(T x) {
    cerr << x << endl;
}

template<typename T, typename... Args>
void debug(T x, Args... args) {
    cerr << x << " ";
    debug(args...);
}

// Fast I/O
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// Custom hash for unordered_map/set
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

class Solution {
public:
    void solve() {
        ll x, n;
        cin >> x >> n;
        vector<ll> v(x+1, 0);
        unordered_map<int, int> mp;
        for(int i = 0; i<n; i++){
            ll light;
            cin >> light;
            mp[light] = 1;
            ll left = 0;
            ll cnt = 0, far = 0;
            for(auto m:mp){
                far = max(far, m.first-left);
                left = m.first;
            }
            far = max(far, x-left);
            cout << far << ' ';
        } 
    }
};

int main() {
    fast_io();
    
    int t = 1;
    // cin >> t;  // Uncomment for multiple test cases
    
    while (t--) {
        Solution sol;
        sol.solve();
    }
    
    return 0;
}