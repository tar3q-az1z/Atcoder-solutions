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
	int n;
	cin >> n;
	vector<int>v(n);
	for(auto& i : v) cin >> i;
	int sum = 0;
	for(auto i : v){
		if(i >= 10){
			sum = sum + (i - 10);
		}
	}
	cout << sum << endl;
	return 0;
}
