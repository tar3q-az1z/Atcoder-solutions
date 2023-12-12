#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<functional>
#include<utility> // pair
#include<cstdlib> // EXIT_SUCCESS,...
using namespace std;
typedef long long int lli;
typedef size_t idx;
int main(){
	int n ;
	cin >> n;
	vector<int> v(n);
	for(auto& i : v) cin >> i;
	sort(v.begin(), v.end(), greater<int>());
	bool flag = false;
	for(int i = n, j = 0; i >= 1; --i, ++j){
//		bool flag = false;
		if(v[j] != i){
			cout << "No\n";
			flag = true;
			break;
		}
		//if(!flag) cout << "Yes\n";
	}
	if(!flag) cout << "Yes\n";
	return 0;
}
