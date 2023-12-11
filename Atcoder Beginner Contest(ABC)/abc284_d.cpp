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
#define _print(x)       cout << (#x) << ": " << (x) << ln;
const double PI = acos(-1.0L);

vector<lli> primes;
const lli mx = 1e7 + 1;
lli isP[mx]{};

lli integral_sqrt(lli x){
	lli l = 0, r = sqrtl(x) + 100, mid;
	lli ans;
	while(l <= r){
		mid = r - (r - l) / 2;
		lli sq = mid * mid;
		if(sq == x) return mid;
		if(sq > x) r = mid - 1;
		else{
			l = mid + 1;
			ans = mid;
		}
	}
	return ans;
}

void check(){
	isP[0] = isP[1] = 1;
	for(lli i = 2; i * i < mx; ++i){
		if(!isP[i]){
			for(lli j = 2 * i; j * j < mx; j += i) isP[j] = 1;
		}
	}
	for(lli i = 2; i < mx; ++i) if(!isP[i]) primes.pb(i);
}

int main(void){
	stop_sync;
	untie_ios;
	check();
	int t;
	cin >> t;
	while(t--){
		lli n;
		cin >> n;
		lli p = 0, q = 0;
		for(auto i: primes){
			if(n % i == 0){
				if(n % (i * i) == 0){
					p = i, q = n / (i * i);
				}else{
					q = i, p = n / q, p = integral_sqrt(p);
				}
				break;
			}
		}
		cout << p << ' ' << q << ln;
	}
	return 0;
}


/*
some familiar issues:
!----> [look at global variables and their values]
!----> [llabs() for long long int type]
!----> [look at input size]
!----> [No sync with puts fn]

*/


