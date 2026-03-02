#include <bits/stdc++.h>
using namespace std;

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
    vector<int> calculateRounds(int n, int m, vector<int>& vc, vector<vector<int>>& swapps){
        vector<int> positions(n + 1);
        vector<int> result;
        vc.insert(vc.begin(), 0);
        
        // store the positions of the values
        for(int i = 1; i<=n; i++){
            positions[vc[i]] = i;
        }

        // calculate the initial number of rounds
        int cnt = 1;
        for(int i = 1; i<n; i++){
            cnt += (positions[i] > positions[i+1]);
        }

        // Declare a set to store the pairs of values that will
        set<pair<int, int>> updatedPairs;

        for(int i = 0; i<m; i++){
            // positions to be swapped
            int L = swapps[i][0], R = swapps[i][1];

            // insert pairs that will be updated
            if(vc[L] + 1 <= n)updatedPairs.insert({vc[L], vc[L]+1});
            if(vc[L] - 1 >= 1)updatedPairs.insert({vc[L]-1, vc[L]});
            if(vc[R] + 1 <= n)updatedPairs.insert({vc[R], vc[R]+1});
            if(vc[R] - 1 >= 1)updatedPairs.insert({vc[R]-1, vc[R]});
        
            // update the count before the swap
            for(auto swapped: updatedPairs){
                cnt -= positions[swapped.first] > positions[swapped.second];
            }

            // perform the swap
            swap(vc[L], vc[R]);

            // update the position of the value at position L
            positions[vc[L]] = L;
            
            // update the position of the value at position R
            positions[vc[R]] = R;

            // update the count after the swap
            for(auto swapped: updatedPairs){
                cnt += positions[swapped.first] > positions[swapped.second];
            }

            result.push_back(cnt);

            // Clear the set for the next operation
            result.clear();
        }

        return result;
    }
    void solve() {
        // n -> number of elements
        // m -> number of operations
        int n, m;
        cin >> n >> m;
        vector<int> vc;
        for(int i = 0; i<n; i++)cin >> vc[i];
        vector<vector<int>>swapps;
        
        for(int i = 0; i<m; i++){
            int a, b;
            cin >> a >> b;
            swapps.push_back({a, b});
        }
        
        vector<int> ans = calculateRounds(n, m, vc, swapps);
        for(auto i:ans){
            cout << i << '\n';
        }
    }
};

int main() {
    fast_io();
    
    int t = 1;
    // cin >> t;
    
    while (t--) {
        Solution sol;
        sol.solve();
    }
    
    return 0;
}