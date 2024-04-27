#include<bits/stdc++.h>
using namespace std;

map<char,int> mp;

void Show(string s1, string s2){
	for(char x : s1){
		mp[x]++;
	}
//	for(auto x : mp) cout << x.first << " " << x.second << endl;
	for(char x : s2){
		if(mp.find(x) != mp.end()){
			mp.erase(x);
		}
	}
	for(auto x : mp){
		cout << x.first << " ";
	}
}

int main(){
	string s1,s2;
	getline(cin,s1);
	fflush(stdin);
	getline(cin,s2);
	Show(s1,s2);
	return 0;
}
