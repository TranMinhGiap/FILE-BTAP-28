#include<bits/stdc++.h>
using namespace std;

void Information(string s){
	int Alpha, Degit, Special;
	Alpha = Degit = Special = 0;
	for(auto x : s){
		if(isdigit(x)) Degit++;
		else if(isalpha(x)) Alpha++;
		else Special++;
	}
	cout << "Number Alpha : " << Alpha << endl << "Number Degit : " << Degit << endl << "Number Special : " << Special;
}

int main(){
	string s;
	getline(cin,s);
	Information(s);
	return 0;
}
