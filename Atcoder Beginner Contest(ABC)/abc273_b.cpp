// Author : Mars_Coder


#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;
#define PI          3.141592653589793238462643383279502884L
#define ln          "\n" // no flush, oppos of endl
#define _flush      endl
#define stop_sync   ios::sync_with_stdio(false) // not to use c-stye io
#define untie_ios   cin.tie(nullptr) // no flush
#define vi          vector<int>
#define vii         vector<lli>
#define vss         vector<string>
#define sz(x)       ((x).size())
#define pb          push_back
#define ppb 	    pop_back
#define lli         long long int
#define FIXED(x)    cout << fixed << setprecision(x)

lli _pow(lli x, lli y){
	lli res = 1;
	for(int i = 1; i <= y; ++i) res *= x;
	return res; 
}
lli _abs(lli x){
	if(x < 0) return -x;
	return x;
}
int main(void){
	
	lli x, k;
	cin >> x >> k;
	lli ml(1);
	for(int i = 0; i < k; ++i){
		ml = _pow(10, i + 1);
		if(x % ml != 0){
			lli x1 = (x / ml) * ml;
			lli x2 = (x / ml + 1) * ml;
			if(_abs(x - x1) < _abs(x - x2)) x = x1;
			else x = x2;
		}
		//cerr << x << ln;
	}
	cout << x << ln;
	return 0;
}


/*
some familiar issues:
----> [look at global variables and their values]

*/
