#include<stdio.h>
int main(){
	long long int n,s,d,x,y,flag=0;
	scanf("%lld %lld %lld",&n,&s,&d);
	while(n--){
		scanf("%lld %lld",&x,&y);
		if((x<s) && (y>d)){
			printf("Yes\n");
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("No\n");
	}
	
	return 0;
}

