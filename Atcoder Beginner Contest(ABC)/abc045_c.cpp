// Author : Mars_Coder


#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;
#define PI    3.141592653589793238462643383279502884L
#define ln "\n" // no flush, oppos of endl
#define _flush endl
#define stop_sync ios::sync_with_stdio(false) // not to use c-stye io
#define untie_ios cin.tie(nullptr) // no flush
#define sz(x) (x).size()
#define lli long long int
#define FIXED(x) cout << fixed << setprecision(x)

int main(void){
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif
    
    lli n;
    cin >> n;
    vector<lli> a;
    lli ans = n;
    while(n){
        a.push_back(n % 10);
        n /= 10;
    }    
    return 0;
}
