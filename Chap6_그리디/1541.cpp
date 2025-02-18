#include<iostream>
#include<string> //문자열을 숫자로 바꿔줄 수 있는 기능!
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string number = "";
	int res = 0;
	string s;
	cin >> s;
	bool isMinus = false;

	for (int i = 0; i <= s.length(); i++) {
		if (s[i] == '+' || s[i] == '-' || i == s.length()) {
			if (isMinus) {
				res -= stoi(number); //문자열을 정수형으로 바꿔줌
				number = "";
			}
			else {
				res += stoi(number);
				number = "";
			}
		}
		else { //숫자를 만난 경우
			number += s[i];
		}

		if (s[i] == '-') {
			isMinus = true;
		}

	}
	cout << res;
	return 0;
}