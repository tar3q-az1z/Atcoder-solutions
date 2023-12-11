// Author : Mars_Coder


#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;

#define ln              "\n" // no flush, oppos of endl
#define _flush          endl
#define stop_sync       ios::sync_with_stdio(false) // not to use c-style io
#define untie_ios       cin.tie(nullptr) // no flush
#define lli             long long int
#define vi              vector<int>
#define vii             vector<lli>
#define vch             vector<char>
#define double          long double
#define vss             vector<string>
#define vpp(T1, T2)     vector<pair<T1, T2>>
#define pq              priority_queue // high prec.
#define pqq(T)          priority_queue<T, vector<T>, greater<T>> 			
#define pb              push_back
#define ppb 	        pop_back
#define mp              make_pair
#define Fi(p)           get<0>(p)
#define Sc(p)           get<1>(p)
#define sz(x)           int ((x).size())
#define all(x)          (x).begin(), (x).end()
#define bin_sc(a, x)    binary_search(all(a), x)
#define lbd(a, x)       lower_bound(all(a), x) // an iter.
#define ubd(a, x)       upper_bound(all(a), x) // an iter.
#define eq_seg(a, x)    equal_range(all(a), x) // a pair of lb, ub
#define FIXED(x)        cout << fixed << setprecision(x)
#define _print(x)       cout << (#x) << ": " << (x) << ln
#define uceil(a, b)     ((a + b - 1) / (b))

const string yms[]{"YES", "Yes", "yes"};
const string nms[]{"NO", "No", "no"};
const double PI = acos(-1.0L);
const int INF = INT_MAX;
struct{const int i = (1e9) + 7; const lli l = (lli)(1e9) + 7ll;}MOD;
lli uround(lli a, lli b) {return (((a) * 1.0000) / (b) + 0.500000);}
lli pow2(lli p){return (1ll << p);}

// nxt templ.

const int mx = (2 * 1e5) + 100;
bool vis[mx] = {};
set<int> ss;
bool flag = 0;
vector<int> g[mx];
int counted[mx] = {1};
int now = 1;
void dfs(int s){
	vis[s] = 1;
	ss.insert(s);
	for(auto i: g[s]){
		if(!vis[i]){
			counted[i] = ++now; 
			counted[i] = counted[s] + 1;
			if(abs(counted[s] - counted[i]) >= 2){
				flag = 1;
				return;
			}
		}
		if(flag) return;
		dfs(i);
	}
}
int main(void){
	stop_sync;
	untie_ios;	
	//sett();
	counted[1] = 1;
	#ifndef ONLINE_JUDGE
		//freopen("generator.txt", "r", stdin);
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		freopen("error.txt", "w", stderr);
	#endif
	
	int n, m;
	cin >> n >> m;
	for(int i = 0; i < m; ++i){
		int a, b;
		cin >> a >> b;
		g[a].pb(b);
		g[b].pb(a);
	}
	dfs(1);
	//cout << flag << ln;
	if(flag || (sz(ss) != n)) cout << nms[1] << ln;
	else cout << yms[1] << ln;
	return 0;
}


/*
some familiar issues:
!----> [look at global variables and their values]
!----> [llabs() for long long int type]
!----> [look at input size and time limit]
!----> [No sync with puts fn]
!----> [prefix vs suffix]
!----> [array contains duplicate values!]
!----> [(a/b+1)*b vs uceil(a,b)*b]

*/