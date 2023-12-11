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
    
    char s1, s2, s3;
    string ans;
    cin >> s1 >> s2 >> s3;
    ans.push_back(s1); 
    ans.push_back(s2);
    ans.push_back(s3);
    sort(ans.begin(), ans.end());
    if(ans == "557") cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
