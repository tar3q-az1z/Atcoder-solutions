// Author : Mars_Coder
// Date   : 13/8/2022

#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;
#define PI    3.141592653589793238462643383279502884L

int main(void){
	int r, c;
	cin >> r >> c;
	if(max(abs(8 - r), abs(8 - c)) % 2) cout << "black\n";
	else cout << "white\n";
	return 0;
}