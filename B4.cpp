#include<bits/stdc++.h>
using namespace std;

map<char,int> mp;

void Countting(string s){
	for(auto x : s) mp[x]++;
	for(auto x : mp){
		cout << x.first << " - " << x.second << endl;
	}
}

int main(){
	string s;
	getline(cin,s);
	Countting(s);
	return 0;
}
