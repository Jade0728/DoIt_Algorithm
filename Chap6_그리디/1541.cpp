#include<iostream>
#include<string> //���ڿ��� ���ڷ� �ٲ��� �� �ִ� ���!
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
				res -= stoi(number); //���ڿ��� ���������� �ٲ���
				number = "";
			}
			else {
				res += stoi(number);
				number = "";
			}
		}
		else { //���ڸ� ���� ���
			number += s[i];
		}

		if (s[i] == '-') {
			isMinus = true;
		}

	}
	cout << res;
	return 0;
}