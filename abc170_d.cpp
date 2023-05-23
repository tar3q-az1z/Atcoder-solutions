#include<bits/stdc++.h>
using namespace std;

using lli = long long int;
using uInt = unsigned int;
using ulli = unsigned long long int;
using vi = vector<int>;
using vii = vector<lli>;
using vc = vector<char>;
using udouble = long double;
using vd = vector<double>;
using vs = vector<string>;
template<typename T> using vv = vector<vector<T>>;
template<typename T> using pq = priority_queue<T>;  // high prec., pq<T> p;
template<typename T> using pq_ = priority_queue<T, vector<T>, greater<T>>;  // dec. as: pq_<T> x;
template<typename T1, typename T2> using vp = vector<pair<T1, T2>>;  // vp<T1, T2> ..

#define ln                "\n" // no flush, oppos of endl
#define _flush            endl
#define stop_sync         ios::sync_with_stdio(false) // not to use c-style io
#define untie_ios         cin.tie(nullptr) // no flush
#define pb                push_back
#define ppb 	          pop_back
#define mp                make_pair
#define Fi(p)             get<0>(p)
#define Sc(p)             get<1>(p)
#define sz(x)             int ((x).size())
#define all(x)            (x).begin(), (x).end()
#define scanv(x)          for(auto &i: x) cin >> i
#define bin_sc(a, x)      binary_search(all(a), x)
#define lbd(a, x)         lower_bound(all(a), x) // an iter.
#define ubd(a, x)         upper_bound(all(a), x) // an iter.
#define eq_seg(a, x)      equal_range(all(a), x) // a pair of lb, ub
#define minE(a)           (*min_element(all(a)))
#define maxE(a)           (*max_element(all(a)))
#define FIXED(x)          cout << fixed << setprecision(x)
#define mem(a, v)         memset(a, v, sizeof a) // 0,-1 for int, and all char
#define filla(a, n, v)    fill(a, a + n, v) // for arr.
#define fillv(a, v)       fill(all(a), v) // for vec.
#define _fillv(a, n, v)   fill_n(a.begin(), n, v)
#define glue(x, y)        x##y
#define msg(x)            cout << (#x) << ln
#define bug(x)            cout << (#x) << ": " << (x) << ln
#define printv(v)         for(auto i: v) cout << i << ' '; cout << ln
#define printvv(v)        for(auto i: v) {for(auto j: i) cout << j << ' '; cout << ln;}
#define printm(m)         for(auto i: m) cout << Fi(i) << " -> " << Sc(i) << ln
#define prints(s)         for(auto i: s) cout << i << ' '; cout << ln
#define uceil(a, b)       ((a + b - 1) / (b))
#define gcd(a, b)         __gcd(a, b)
#define unq_v(a)          a.resize(distance(a.begin(), unique(all(a)))) // for same valued consec. grp
#define mk_upper(s)       transform(s.begin(), s.end(), s.begin(), ::toupper)
#define mk_lower(s)       transform(s.begin(), s.end(), s.begin(), ::tolower)
#define valid(nx, ny)     (nx >= 1 && nx <= row && ny >= 1 && ny <= col)

const int dx[]{+1, -1, +0, +0};  // for 4 dir move
const int dy[]{+0, +0, +1, -1};
const int ddx[]{+0, +0, +1, -1, -1, +1, -1, +1};  // for 8 dir move(4 ed + 4 cor)
const int ddy[]{-1, +1, +0, +0, +1, +1, -1, -1};

const string yms[]{"YES", "Yes", "yes"};
const string nms[]{"NO", "No", "no"};
const double PI = acos(-1.0L);
struct{const int i = (1e9) + 7; const lli l = (lli)(1e9) + 7ll;}MOD;
struct{const int i = INT_MAX; const lli l = LLONG_MAX;}inf;

int main(void){
	stop_sync;
	untie_ios;
	
	int t(1), tcase(0);
	//cin >> t; 
	while(++tcase, t--){
		//cout << "--------Case #" << tcase << ": --------\n";
		int n;
		cin >> n;
		vi a(n);
		for(auto &i: a) cin >> i; 
		sort(begin(a), end(a));
		int mx = 1e6 + 10;
		bool ck[mx]{};
		int ans = n;
		for(int i = 0; i < n; ++i){
			bool f = 0;
			for(int j = 1; j * j <= a[i]; ++j){
				if(a[i] % j == 0){
					if(ck[j] || ck[a[i] / j]){
						f = 1;
						break;
					}
				}
			}
			ck[a[i]] = 1;
			if(f == 0){
				if(i + 1 < n) if(a[i + 1] == a[i]) --ans;
			}
			if(f) --ans;
		}
		cout << ans << ln;
	}
	
	return 0;
}

