#include<iostream>
#include<string>
using namespace std;
int main(){
	string str;
	bool flag=false;
	cin>>str;
	for(int i=0;i<str.length();++i){
		if((i+1)%2!=0){
			if(str[i]>=97 && str[i]<=122){
				continue;
			}
			else{
				cout<<"No\n";
				flag=true;
				break;
			}
		}
		else{
			if(str[i]>=65 && str[i]<=90){
				continue;
			}
			else{
				cout<<"No\n";
				flag=true;
				break;
			}
		}
	}	
	if(!flag) cout<<"Yes\n";
	return 0;
}

