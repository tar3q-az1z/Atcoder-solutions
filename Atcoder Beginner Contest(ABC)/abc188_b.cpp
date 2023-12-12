#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n,val,sum=0;
	vector<int>a;
	vector<int>b;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>val;
		a.push_back(val); 
	}
	for(int i=0;i<n;++i){
		cin>>val;
		b.push_back(val); 
	}
	for(int i=0;i<n;++i){
		sum=sum+(a[i]*b[i]);
	}
	if(sum==0) cout<<"Yes\n";
	else cout<<"No\n";
	return 0;
}

