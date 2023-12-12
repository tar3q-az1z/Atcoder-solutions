#include<stdio.h>
int main(){
	long long int put,n,x,i,count=0;
	scanf("%lld %lld",&n,&x);
	for(i=0;i<n;i++){
		scanf("%lld",&put);
		if(put!=x){
			printf("%lld ",put);
			count=1;
		}
	}
	if(count==0) printf(" ");
	return 0;
}
