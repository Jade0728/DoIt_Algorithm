#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {

	string N;
	cin >> N;
	int size = N.length();

	for (int i = 0; i < size; i++) {
		int max_ind = i;
		for (int j = i + 1; j < size; j++) {
			if (N[max_ind] < N[j]) max_ind = j;
		}
		swap(N[i], N[max_ind]);
	}

	for (int i = 0; i < size; i++) {
		cout << N[i];
	}

	return 0;
}