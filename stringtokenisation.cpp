#include <iostream>
#include<string>
#include <sstream>
#include <vector>

using namespace std;

int main(){
				#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string input;
	getline(cin,input);
	stringstream  ss(input);

	string token;
	vector<string> v;
	while(getline(ss,token,' ')){
		v.push_back(token);
	}
	for(auto k:v){
			cout<<k<<endl;
	}
	return 0;
}