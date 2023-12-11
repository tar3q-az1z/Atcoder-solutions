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
    
    string s;
    cin >> s;
    int a[26] = {};
    for(int i = 0; i < sz(s); ++i){
        ++a[s[i] - 97];
    }
    for(int i = 0; i < 26; ++i){
        if(a[i] % 2 != 0){
            cout << "No\n" << ln;
            return 0;
        }
    }
    cout << "Yes\n" << ln;
    return 0;
}
