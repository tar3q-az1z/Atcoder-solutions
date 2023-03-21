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
    
    int n, l;
    cin >> n >> l;
    string s1, ans;
    vector<string> temp;
    for(int i = 0; i < n; i++){
        cin >> s1;
        temp.push_back(s1);
    }
    sort(temp.begin(), temp.end());
    for(int i = 0; i < n; ++i){
        ans += temp[i];
    }
    cout << ans << ln;
    return 0;
}
