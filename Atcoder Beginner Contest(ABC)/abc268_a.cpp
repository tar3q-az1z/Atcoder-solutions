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
	
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	set<int> s;
	s.insert(a);
	s.insert(b);
	s.insert(c);
	s.insert(d);
	s.insert(e);
	cout << s.size() << ln;
	return 0;
}
