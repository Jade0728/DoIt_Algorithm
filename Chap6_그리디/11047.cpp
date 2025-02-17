#include<iostream>
#include<vector> 
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;
	cin >> n >> k;

	vector <int> coin(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> coin[i];
	}

	int sum = 0;
	for (int i = n - 1; i >= 0; i--) {
		if (k >= coin[i]) {
			sum += (k / coin[i]); //4200/1000=4
			k = k % coin[i]; //4200%1000=200
		}
	}

	
	cout << sum;
	return 0;
}