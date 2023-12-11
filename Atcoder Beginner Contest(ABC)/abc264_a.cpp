// Author : Mars_Coder
// Date   : 13/8/2022
// ABC_264 : A
#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;
#define PI    3.141592653589793238462643383279502884L

int main(void){
	int l, r;
	cin >> l >> r;
	string s = "atcoder";
	for(int i = l - 1; i < r; ++i) cout << s[i];
	cout << endl;
	return 0;
}