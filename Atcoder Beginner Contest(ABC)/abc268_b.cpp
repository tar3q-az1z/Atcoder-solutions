// Author : Mars_Coder


#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;
#define PI    3.141592653589793238462643383279502884L
#define ln "\n" // no flush, oppos of endl
#define _flush endl
#define stop_sync ios::sync_with_stdio(false) // not to use c-stye io
#define untie_ios cin.tie(nullptr) // no flush
#define lli long long int
#define FIXED(x) cout << fixed << setprecision(x)


int main(void){
	
	string s, t;
	cin >> s >> t;
	if(s.size() > t.size()) cout << "No\n";
	else if(s == t) cout << "Yes\n";
	else{
		int cnt = 0;
		for(int i = 0; i < s.size(); ++i){
			if(s[i] == t[i]) ++cnt;
		}
		if(cnt == s.size()) cout << "Yes\n";
		else cout << "No\n";
	}
	return 0;
}
