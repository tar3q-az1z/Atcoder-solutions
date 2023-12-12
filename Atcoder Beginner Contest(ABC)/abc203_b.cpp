#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
typedef long long int lli;
int main(){
	int n , k;
	cin >> n >> k;
	int sum = 0;
	for(int i = 1; i <= n; ++i){
		for(int j = 1; j <= k; ++j){
			sum = sum + ((i * 100) + (0 * 10) + (j * 1));
		}
	}
	cout << sum << endl;
	
	
	return 0;
}
