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

	//메모리 할당
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
	// 병합된 결과를 다시 arr에 반영
	//다시 반영되지 않으면 arr에 데이터들이 남아 메모리를 불필요하게 차지하게 됨
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