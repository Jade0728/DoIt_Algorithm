#include <iostream>
using namespace std;
#include <vector>

int main() {
	//C�� C++ ����� ������ ����ȭ
	//false -> ����ȭ�� ��Ȱ��ȭ -> �Ҿ��������� �ӵ� ���
	ios::sync_with_stdio(false);
	//����� ���۸� ������ν� �������
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