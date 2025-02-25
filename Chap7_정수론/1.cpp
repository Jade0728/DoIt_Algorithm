#include<iostream>
#include<vector>
#include<string> 
using namespace std;
int main() {
	string num = "1234";
	if (num[0] != num[1]) {
		cout << "f";
	}
	cout << num[0];
	cout << num[2];
}