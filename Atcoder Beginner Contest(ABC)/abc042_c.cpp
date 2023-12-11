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

    int n, k;
    cin >> n >> k;
    int ai;
    vector<int> digit(10, 0);
    for(int i = 0; i < k; ++i){
        cin >> ai;
        ++digit[ai];
    }
    while(1){
        int x = n;
        bool flag = 1;
        while(x){
            int d = x % 10;
            if(digit[d] == 1){
                ++n;
                flag = 0;
                break;
            }
            x /= 10;
        }
        if(flag) break;
    }
    cout << n << ln;
    return 0;
}
