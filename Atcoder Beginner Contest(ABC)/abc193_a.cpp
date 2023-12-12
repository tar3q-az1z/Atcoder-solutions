#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	int a,b,absol;
	double value;
	cin>>a>>b;
	absol=abs(a-b);
	value=double(absol)/double(a);
	value=value*100.000000000000;
	printf("%0.20lf\n",value);
	//cout<<value<<"\n";
	return 0;
}

