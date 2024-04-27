#include<bits/stdc++.h>
using namespace std;

map<char,int> mp;

void Show(string s){
	for(auto x : s){
		mp[x]++;
	}
	for(auto x : s){
		if(mp[x] != 0){
			cout << x << " - " << mp[x] << endl;
			mp[x] = 0;
		}
	}
}

int main(){
	string s;
	getline(cin,s);
	Show(s);
	return 0;
}
