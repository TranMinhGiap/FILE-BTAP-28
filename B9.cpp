#include<bits/stdc++.h>
using namespace std;

set<char> st;

void Show(string s1, string s2){
	for(auto x : s1) st.insert(x);
	for(auto x : s2) st.insert(x);
	for(auto x : st) cout << x << " ";
}
int main(){
	string s1, s2;
	getline(cin,s1);
	getline(cin,s2);
	Show(s1,s2);
	return 0;
}
