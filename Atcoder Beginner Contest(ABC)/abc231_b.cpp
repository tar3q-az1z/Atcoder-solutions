#define _USE_MATH_DEFINES

#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<stack>
#include<queue>
#include<cstdio>
#include<set>
#include<unordered_set>
#include<cmath>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<utility>
#include<cstdlib>
using namespace std;
typedef long long int lli;
typedef size_t idx;
#define vi vector<int>
#define vl vector<lli>
#define pb(n) push_back(n)
#define ln "\n"
#define sp ends
#define IT(x) x.begin(), x.end()
#define loop(start, end, incre) for(int i = start; i < end; i += incre)
#define newline cout << ln
const int MOD = 1000000007;
#define precision(n) cout << fixed << setprecision(n) // n places after dec.point
#define fastios ios_base::sync_with_stdio(false); cin.tie(0)


int main(){
	int n;
	cin >> n;
	vector<string> s;
	string sr;
	int t = n;
	while(t--){
		cin >> sr;
		s.pb(sr);
	}
	sort(IT(s));
	stack<string> tp;
	tp.push(s[0]);
	int mx = -1;
	for(int i = 0; i < n; ++i){
		if(i + 1 >= n) break;	
		int cnt = 1;
		while(s[i] == s[i + 1]){
			++i;
			++cnt;
			if(i + 1 == n) break;
		}
		if(cnt > mx){
			mx = cnt;
			tp.pop();
			tp.push(s[i]);
		}
	}
	cout << tp.top() << ln;
	return 0;
}
