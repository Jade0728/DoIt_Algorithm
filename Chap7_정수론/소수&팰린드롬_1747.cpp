#include<iostream>
#include<vector>
#include<string> 
using namespace std; 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	//1,000,000
	//입력받기

	int n;
	cin >> n;

	vector <bool> isPrime(10000001, true);
	isPrime[0] = false; isPrime[1] = false;

	string num;
	bool pen = false;
	//소수를 찾기
	
	for (int i = 2; i*i<= 10000000; i++) {
		if (isPrime[i]) {
			for (int j = i * i; j <= 10000000; j += i) {
				isPrime[j] = false;
			}
		}
	}

	//소수의 값을 char 형태로 변환 후 투포인터를 이용해 팰린드롬 여부 확인
	
	for (int i = n; i <= 10000000; i++) {
		if (isPrime[i]) {
			pen = true;
			num = to_string(i);
			int ind1 = 0; int ind2 = num.length()- 1;
			while (ind1 <= ind2) {
				if (num[ind1] == num[ind2]) {
					ind1++;
					ind2--;
				}
				else {
					pen = false;
					break;
				}
			}
		}
		if (pen) {
			cout << num;
			break;
		}
	}
	return 0;

}

