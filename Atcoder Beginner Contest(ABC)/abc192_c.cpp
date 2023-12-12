#include<iostream>
#include<cmath>
using namespace std;
typedef long long int lli;
lli arr[15];
lli find_digit(lli n){
	lli dig_no;
	if(n==0) dig_no=1;
	else{
		dig_no=floor(log10(abs(n)))+1;
	}
	//lli dig_no=floor(log10(abs(n)))+1;
	for(int j=0;j<dig_no;++j){
		arr[j]=n%10;
		n=n/10;
	}
	//cout<<"dig_no: "<<dig_no<<"\n";//
	return dig_no;
}
int compare1(const void *a,const void *b){
	return *(int *)b-*(int *)a;
}
int compare2(const void *a,const void *b){
	return *(int *)a-*(int *)b;
}
int g1(int x){
	int dig_no=find_digit(x);
	qsort(arr,dig_no,sizeof(lli),compare1);
	lli sum=0;
	lli mul=1;
	for(lli j=dig_no-1;j>=0;--j){
		sum=sum+(arr[j]*mul);
		mul=mul*10;
	}
	return sum;
}
lli g2(lli x){
	lli dig_no=find_digit(x);
	qsort(arr,dig_no,sizeof(lli),compare2);
	lli sum=0;
	lli mul=1;
	for(lli j=dig_no-1;j>=0;--j){
		sum=sum+(arr[j]*mul);
		mul=mul*10;
	}
	return sum;
}

int main(){
	lli n,k;
	cin>>n>>k;
	lli a_not=n;
	for(lli i=1;i<=k;++i){
		lli g1_val=g1(a_not);
		lli g2_val=g2(a_not);
		lli fofx=g1_val-g2_val;
		a_not=fofx;
	}
	cout<<a_not<<"\n";
	return 0;
}

