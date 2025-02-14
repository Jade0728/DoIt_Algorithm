#include<iostream>
#include<vector> 
using namespace std;
void DFS(int);
bool isPrime(int);
int n;
//n�ڸ� ������ �ڸ����� ��� �Ҽ��� �� ex) 7331(4�ڸ�) 733(3�ڸ�) 73(2�ڸ�) 7(1�ڸ�)

//�Ҽ��Ǻ�
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