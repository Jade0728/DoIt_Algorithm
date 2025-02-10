#include <iostream>
using namespace std;
#include <vector>
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N,M;
	cin >> N >> M;
	vector<vector<int>> A(N + 1, vector<int>(N + 1, 0));
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			int temp;
			cin >> temp;
			if (i == 1 && j == 1) A[i][j] = temp;
			else if (i == 1) A[i][j] = A[i][j - 1] + temp;
			else if (j == 1) A[i][j] = A[i - 1][j] + temp;
			else A[i][j] = A[i][j - 1] + A[i - 1][j] - A[i - 1][j - 1] + temp;
		}
	}
	for (int i = 0; i < M; i++) {
		int x1, x2, y1, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		cout << A[x2][y2] - A[x1-1][y2] - A[x2][y1-1] + A[x1-1][y1-1]<<"\n";

	}

	return 0;
}