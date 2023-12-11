// Author : Mars_Coder


#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;
#define PI          3.141592653589793238462643383279502884L
#define ln          "\n" // no flush, oppos of endl
#define _flush      endl
#define stop_sync   ios::sync_with_stdio(false) // not to use c-stye io
#define untie_ios   cin.tie(nullptr) // no flush
#define sz(x)       ((x).size())
#define pb 		    push_back
#define ppb 	    pop_back
#define lli         long long int
#define FIXED(x)    cout << fixed << setprecision(x)

int main(void){
	int n;
	cin >> n;
	int ai;
	int even_m1 = 0, even_m2 = 0, odd_m1 = 0, odd_m2 = 0; 
	for(int i = 0; i < n; ++i){
		cin >> ai;
		if(ai % 2 == 0){
			if(ai > even_m1){
				even_m2 = even_m1;
				even_m1 =ai;
			}else if(ai > even_m2) even_m2 = ai;
		}else{
			if(ai > odd_m1){
				odd_m2 = odd_m1;
				odd_m1 =ai;
			}else if(ai > odd_m2) odd_m2 = ai;
		}
	}
	int ans = max((even_m1 + even_m2), (odd_m1 + odd_m2));
	if(ans % 2 == 0) cout << ans << ln;
	else cout << "-1" << ln;
	return 0;
}
