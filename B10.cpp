#include<bits/stdc++.h>
using namespace std;

void Check(string s){
	set<char> st;
	for(char x : s) st.insert(x);
	if(st.size() == 26) cout << endl << "YES";
	else cout << endl << "NO";
}

int main(){
	int n;
	cin >> n;
	while(n){
		string tmp;
		cin >> tmp;
		Check(tmp);
	}
	return 0;
}
