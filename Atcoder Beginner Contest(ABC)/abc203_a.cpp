#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
typedef long long int lli;
int main(){
	int a, b, c;
	cin >> a >> b >> c;
	if(a == b) cout << c << endl;
	else if( a == c) cout << b << endl;
	else if( b == c) cout << a << endl;
	else cout << 0 << endl;
	
	
	
	return 0;
}
