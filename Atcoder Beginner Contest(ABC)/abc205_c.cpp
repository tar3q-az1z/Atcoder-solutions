#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<functional>
#include<utility> // pair
#include<cstdlib> // EXIT_SUCCESS,...
using namespace std;
typedef long long int lli;
typedef size_t idx;
int main(){
	int a, b, c;
	cin >> a >> b >> c;
	if(a > 0 && b > 0){
		if( a < b){
			cout << "<" << endl;
		}
		else if(a > b){
			cout << ">" << endl;
		}
		else cout << "=" << endl;
	}
	else{
		if(c%2 == 0){
			if(abs(a) < abs(b)){
				cout << "<" << endl;
			}
			else if(abs(a) > abs(b)){
				cout << ">" << endl;
			}
			else{
				cout << "=" << endl;
			}
		}
		else{
			if(a < b){
				cout << "<" << endl;
			}
			else if(a > b){
				cout << ">" << endl;
			}
			else{
				cout << "=" << endl;
			}
		}
	}
	return 0;
}
