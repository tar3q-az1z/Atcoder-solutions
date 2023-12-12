#include<iostream>
#include<vector>
#include<string>
#include<cstring>
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
#define ln endl
#define sp ends


vector<vi> gp;
int bfs(int src, int n){
	int ans = 0;
	queue<int> q;
	vector<bool> vis(n, false);
	q.push(src);
	vis[src] = true;
	while(!q.empty()){
		for(int i = 0; i < gp[q.front()].size(); ++i){
			if(!vis[gp[q.front()][i]]){
				vis[gp[q.front()][i]] = true;
				++ans;
				q.push(gp[q.front()][i]);
			}
		}
		q.pop();
	}
	return ans;
}

int main(){
	int n, m;
	cin >> n >> m;
	gp.resize(n + 1);
	int src, dest;
	for(int i = 0; i < m; ++i){
		cin >> src >> dest;
		gp[src].pb(dest);
	}
	int ans = 0;
	for(int i = 1; i < n + 1; ++i){
		ans = ans + bfs(i, n+1);
	}
	cout << ans + n << ln;
	gp.clear();
	return 0;
}
