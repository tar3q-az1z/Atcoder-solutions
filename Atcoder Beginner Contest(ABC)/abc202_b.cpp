#include<iostream>
#include<string>
using namespace std;
int main(){
	string str;
	cin >> str;
	for(int i = str.length()-1; i >=0; --i){
		if(str[i] == '6'){
			cout << '9';
		}
		else if(str[i] == '9'){
			cout << '6';
		}
		else{
			cout << str[i];
		}
	}
	cout << endl;
	return 0;
}
