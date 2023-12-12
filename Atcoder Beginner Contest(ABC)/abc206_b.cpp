#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<stack>
#include<queue>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<functional>
#include<utility>
#include<cstdlib>
using namespace std;
typedef long long int lli;
typedef size_t idx;
#define vi vector<int>
#define pb(n) push_back(n)
#define ln "\n"
#define sp ends
int main(){
	int n;
	cin >> n;
	int cnt = 0;
	int sum = 0;
	for(int i = 1; i <= n; ++i){
		sum = sum + i;
		++cnt;
		if(sum >= n){
			cout << cnt << ln;
			break; 
		}
	}
	
	return 0;
}