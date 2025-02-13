#include<iostream>
#include<vector>
using namespace std;
void merge(int s ,int e);
void conquer(int s, int e);
vector<int>arr;
vector<int>sorted;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	//�޸� �Ҵ�
	arr.resize(N);
	sorted.resize(N);

	for (int i = 0; i <N; i++) {
		cin >> arr[i];
	}

	conquer(0, N-1);

	for (int i = 0; i <  N; i++) {
		cout << arr[i] << "\n";
	}
	return 0;
}
void merge(int s, int e) {
	int m = (s + e) / 2;
	int ind1 = s;
	int ind2 = m + 1;
	int k = s;

	while (ind1 <= m && ind2 <= e) {
		if (arr[ind1] < arr[ind2]) {
			sorted[k++] = arr[ind1++];
		}
		else {
			sorted[k++] = arr[ind2++];
		}
	}
	while (ind1 <= m) {
		sorted[k++] = arr[ind1++];
	}
	while (ind2 <= e) {
		sorted[k++] = arr[ind2++];
	}
	// ���յ� ����� �ٽ� arr�� �ݿ�
	//�ٽ� �ݿ����� ������ arr�� �����͵��� ���� �޸𸮸� ���ʿ��ϰ� �����ϰ� ��
	for (int i = s; i <= e; i++) {
		arr[i] = sorted[i];
	}
}
void conquer(int s, int e) {
	if (s < e) {
		int m = (s + e) / 2;
		conquer(s, m);
		conquer(m + 1, e);
		merge(s, e);
	}
}