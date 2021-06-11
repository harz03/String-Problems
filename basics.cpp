#include<iostream>
#include<vector>
#include<string>


using namespace std;

string para = "this is the test string to use the string find method";

int main(){
			#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	cout<<para.find("use")<<endl; //var_name.find return index of string where it found
	//if string not find it will return unsigned intger value  = -1;
	//https://www.cplusplus.com/reference/string/string/find/
	
	return 0;	
}