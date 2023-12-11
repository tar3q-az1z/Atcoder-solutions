// Author : Mars_Coder
// Date   : //2022

#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;
#define PI    3.141592653589793238462643383279502884L
#define ln "\n" // no flush, oppos of endl
#define _flush endl
#define stop_sync ios::sync_with_stdio(false) // not to use c-stye io
#define untie_ios cin.tie(nullptr) // no flush
#define FOR(a, b, c) for(auto i = a; i < b; i += c)
#define lli long long int

int main(void){
	lli n;
	cin >> n;
	lli cm = 998244353;
	lli mod = (n % cm + cm) % cm;
	cout << mod << ln;
	return 0;
}
