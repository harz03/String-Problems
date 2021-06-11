#include<iostream>
#include<vector>
#include<string>


using namespace std;



int main(){
			#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s;

	cin>>s;
	cout<<s<<endl;
	getline(cin,s); /// getling(cin,inputname,termaintion)
	cout<<s<<endl;
	getline(cin,s,'.');
	cout<<s;
	return 0;	
}