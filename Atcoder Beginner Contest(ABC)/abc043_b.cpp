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
    vector<char> ans;
    for(int i = 0; i < sz(s); ++i){
        if(s[i] == 'B'){
            if(sz(ans) != 0) ans.pop_back();
        }else ans.push_back(s[i]);
    }
    for(auto i : ans) cout << i;
    cout << ln;
    return 0;
}
