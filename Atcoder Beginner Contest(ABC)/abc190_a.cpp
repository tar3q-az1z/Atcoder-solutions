#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(c==0){
		while(1){
			if(a==0){
				printf("Aoki\n");
				break;
			}
			if(b==0){
				printf("Takahashi\n");
				break;
			}
			
			a--;
			b--;
		}
	}
	else{
		while(1){
			if(b==0){
				printf("Takahashi\n");
				break;
			}
			if(a==0){
				printf("Aoki\n");
				break;
			}
			
			b--;
			a--;
		}
	}
	return 0;
}

