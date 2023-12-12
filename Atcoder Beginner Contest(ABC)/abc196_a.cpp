#include<iostream>
using namespace std;
int maxx(int a,int b){
	if(a>b) return a;
	else return b;
}
int minn(int a,int b){
	if(a<b) return a;
	else return b;
}
int main(){
	int a,b,c,d;
	cin>>a>>b;
	cin>>c>>d;
	int ma=maxx(a,b);
	int mi=minn(c,d);
	cout<<ma-mi<<"\n";
	return 0;
	
}
