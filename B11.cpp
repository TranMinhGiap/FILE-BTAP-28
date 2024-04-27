#include<bits/stdc++.h>
using namespace std;


string Lower(string s){
	for(char &x : s){
		x = tolower(x);
	}
	return s;
}
void check(string s){
	set<char> st;
	s = Lower(s);
	for(char x : s) st.insert(x);
	if(st.size() == 26) cout << endl << "YES" << endl;
	else cout << endl << "NO" << endl;
}
int main(){
	int n;
	cin >> n;
	fflush(stdin);
	while(n--){
		string tmp;
		getline(cin,tmp);
		check(tmp);
	}
	return 0;
}
