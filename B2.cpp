#include<bits/stdc++.h>
using namespace std;

string Lower(string s){
	for(char &x : s){
		if(x >= 65 <= 90) x = tolower(x);
	}
	return s;
}

int main(){
	string ans;
	getline(cin,ans);
	cout << Lower(ans);
	return 0;
}
