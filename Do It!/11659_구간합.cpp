#include <iostream>
using namespace std;
#include <vector>

int main() {
	//C와 C++ 입출력 버퍼의 동기화
	//false -> 동기화를 비활성화 -> 불안정하지만 속도 향상
	ios::sync_with_stdio(false);
	//입출력 버퍼를 비움으로써 성능향상
	cin.tie(NULL);
	cout.tie(NULL);

	int suNo, quizno;
	cin >> suNo >> quizno;
	int S[100001] = {};

	for (int i = 1; i <= suNo; i++) {
		int temp;
		cin >> temp;
		S[i] = S[i - 1] + temp;
	}
	for (int i = 0; i < quizno; i++) {
		int start, end;
		cin >> start >> end;
		cout << S[end] - S[start - 1] << "\n";
	}


	return 0;
}