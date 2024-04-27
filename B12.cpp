#include<bits/stdc++.h>
using namespace std;

int main(){
	string ans;
	cin >> ans;
	bool check = true;
	for(int i = 0 ; i < ans.size() / 2 ; i++){
		if(ans[i] != ans[ans.size()-i-1]){
			check = false;
			break;
		}
	}
	if(check == true) cout << endl << "YES";
	else cout << endl << "NO";
	return 0;
}
