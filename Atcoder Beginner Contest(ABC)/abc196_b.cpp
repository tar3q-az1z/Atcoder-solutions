#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(){
	string str;
	int i;
	getline(cin,str);
	for(i=0;i<str.length();++i){
		if(str[i]=='.'){
			break;
		}
	}
	for(int j=0;j<i;++j) cout<<str[j];
	cout<<"\n";
	return 0;  
}
