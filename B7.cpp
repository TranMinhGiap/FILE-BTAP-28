#include<bits/stdc++.h>
using namespace std;

map<char,int> mp;
vector<char> vt;

void Show(string s1, string s2){
	for(char x : s1){
		mp[x]++;
	}
	for(char x : s2){
		if(mp[x] != 0) vt.push_back(x);
	}
	for(auto x : vt) cout << x;
}

int main(){
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	Show(s1,s2);
	return 0;
}
