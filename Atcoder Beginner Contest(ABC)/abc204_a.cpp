#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<functional>
using namespace std;
typedef long long int lli;
typedef size_t idx;
int main(){
	int x, y;
	cin >> x >> y;
	if(x == y){
		cout << x << endl;
	}
	else{
		cout << 3 - (x + y) << endl;
	}
	return 0;
}
