#include<bits/stdc++.h>
using namespace std;

void check(string ans){
	int check = 0;
	bool test = true;
	for(int i = 0 ; i < ans.size() / 2 ; i++){
		if(ans[i] != ans[ans.size()-i-1]){
			if(check == 0) check = 1;
			else{
				test = false;
				break;
			}
		}
	}
	if(test == true) cout << endl << "Yes" << endl;
	else cout << endl << "No" << endl;
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
