#include<iostream>
#include<vector> 
#include<string> //문자열을 숫자로 바꿔줄 수 있는 기능!
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