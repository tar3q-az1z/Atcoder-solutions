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
    
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    reverse(s3.begin(), s3.end());
    char next = s1[sz(s1) - 1];
    s1.pop_back();
    while(1){
        if(next == 'a'){
            if(s1.empty()){
                cout << "A" << ln;
                break;
            }
            next = s1[sz(s1) - 1];
            s1.pop_back();
        }else if(next == 'b'){
            if(s2.empty()){
                cout << "B" << ln;
                break;
            }
            next = s2[sz(s2) - 1];
            s2.pop_back();
        }else{
            if(s3.empty()){
                cout << "C" << ln;
                break;
            }
            next = s3[sz(s3) - 1];
            s3.pop_back();
        }
    }
    return 0;
}
