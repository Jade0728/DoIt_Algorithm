#include<iostream>
#include<vector> 
#include<string> //���ڿ��� ���ڷ� �ٲ��� �� �ִ� ���!
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	vector <vector <int, int>> arr(n);
	for (int i = 0; i < n; i++) {
		int s, e;
		cin >> s >> e;
		for (int j = s; j <= e; j++) {
			arr[i][j] = 1;
		}
	}

	




	return 0;
}