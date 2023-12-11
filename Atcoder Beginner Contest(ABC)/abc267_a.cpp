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
	
	
	string s;
	cin >> s;
	if(s == "Monday") cout << 5 << ln;
	else if(s == "Tuesday") cout << 4 << ln;
	else if(s == "Wednesday") cout << 3 << ln;
	else if(s == "Thursday") cout << 2 << ln;
	else cout << 1 << ln;
	return 0;
}
