// @Author: Mars_Coder
// @date: 20-May-23 12:17:48 AM +06


#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;

#define ln "\n"
// array<T, n> a = {}

int main(void){

	#ifndef ONLINE_JUDGE
		//freopen("generator.txt", "r", stdin);
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		freopen("error.txt", "w", stderr);
	#endif
	
	int t(1), tcase(0);
	//cin >> t; 
	while(++tcase, t--){
		//cout << "--------Case #" << tcase << ": --------\n";
		int n;
		cin >> n; 
		string s;
		cin >> s;
		int tt = 0, aa = 0;
		for(int i = 0; i < n; ++i){
			if(s[i] == 'T') ++tt;
			else ++aa; 
		}
		if(tt != aa){
			if(tt > aa) cout << 'T' << ln;
			else cout << "A" << ln;
		}else{
			if(s[n - 1] == 'A') cout << 'T' << ln;
			else cout << 'A' << ln;
		}
	}
	return 0;
}


/*
some familiar issues & sugg.:
!----> [RE-READ THE CODE!]
!----> [invariants to array?]
!----> [kinda back-tracking?]
!----> [use clear() at last if resize() used!]
!----> [look at global variables and their values]
!----> [llabs() for long long int type]
!----> [look at input size and time limit]
!----> [No sync with puts fn]
!----> [prefix vs suffix]
!----> [binary search? -> ubd, lbd]
!----> [array contains duplicate values!]
!----> [(a/b+1)*b vs uceil(a,b)*b]
!----> [unq_v for vec only]
!----> [bitmask vs unsigned]

*/
