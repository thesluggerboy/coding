#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif

	string s;
	cin>>s;

	if(islower(s[0])){
		int c = s[0];
		s[0] = toupper(c);
		cout<<s<<"\n";
	} else{
		cout<<s<<"\n";
	}

	return 0;
}