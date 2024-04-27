#include<bits/stdc++.h>
using namespace std;

int cnt[200];
int val = INT_MIN;

void Show(string s){
	for(char x : s){
		cnt[x]++;
		val = max(val,cnt[x]);
	}
	for(int i = 200 ; i >= 0 ; i--){
		if(cnt[i] == val){
			cout << (char)(i) << " - " << cnt[i];
			return;
		}
	}
}

int main(){
	string s;
	getline(cin,s);
	Show(s);
	return 0;
}
