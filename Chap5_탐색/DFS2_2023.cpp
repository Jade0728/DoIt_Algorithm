#include<iostream>
#include<vector> 
using namespace std;
void DFS(int);
bool isPrime(int);
int n;
//n자리 각각의 자리수가 모두 소수인 것 ex) 7331(4자리) 733(3자리) 73(2자리) 7(1자리)

//소수판별
bool isPrime(int num) {
	for (int i = 2; i <= (num / 2); i++) {
		if (num % i == 0) 
			return false;
	}
	return true;
}
//DFS
void DFS(int number, int jarisu) {
	if (jarisu == n) {
		if (isPrime(number)) {
			cout << number << "\n";
			return;
		}
	}
	for (int i = 1;  i <= 9; i += 2) {
		if (isPrime(number * 10 + i)) {
			DFS(number * 10 + i, jarisu + 1);
		}
	}
	
	
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
 
	cin >> n; 

	DFS(2,1);
	DFS(3, 1);
	DFS(5, 1);
	DFS(7, 1);


	return 0;

}