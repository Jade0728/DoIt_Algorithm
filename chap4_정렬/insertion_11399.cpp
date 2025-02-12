#include<iostream>
#include<vector> 
#include<algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	vector <int>A(N, 0);
	vector <int>S(N, 0);

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	//sort(A.begin(), A.end());
	//삽입정렬하기
	int i, j,key,insert_ind;
	for (i = 1; i < N; i++) {
		key = A[i];
		for (j = i - 1; j >= 0; j--) {
			if (key < A[j]) {
				A[j+1] = A[j];
			}
			else {
				break;
			}
		}
		A[j+1] = key;	
	}

	S[0] = A[0];
	int sum = S[0];
	for (int i = 1; i < N; i++) {
		S[i] = S[i - 1] + A[i];
		sum += S[i];
	}
	cout << sum;
	

	return 0;
}