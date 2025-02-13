#include<iostream>
#include<vector>
using namespace std;
void merge(int s, int e);
void conquer(int s, int e);
vector <int> arr;
vector <int> sorted;
int cnt=0;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	 
	arr.resize(n);
	sorted.resize(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	conquer(0, n - 1);

	cout << cnt ;

	return 0;
}
void merge(int s, int e) {
	int m = (s + e) / 2;
	int ind1 = s;
	int ind2 = m + 1;
	int k = s;

	while (ind1 <= m && ind2 <= e) {
		if (arr[ind1] <= arr[ind2]) {
			sorted[k++] = arr[ind1++];
		}
		else {
			sorted[k++] = arr[ind2++];
			cnt +=ind2-k;
		}
	}

	while (ind1 <= m) {
		sorted[k++] = arr[ind1++]; 
	}

	while (ind2 <= e) {
		sorted[k++] = arr[ind2++]; 
	}

	for (int i = s; i <=e; i++) {
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
