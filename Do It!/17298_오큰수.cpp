#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	vector <long long> inarr(N, 0);
	vector <long long> outarr(N, 0);

	for (int i = 0; i < N; i++) {
		cin >> inarr[i];
	}

	stack <int> st; //출력할 스택
	st.push(0);
	for (int i = 1; i < N; i++){
		while (!st.empty() && inarr[st.top()] < inarr[i]) {
			outarr[st.top()] = inarr[i];
			st.pop();
		}
		st.push(i);
	}
	while (!st.empty()) {
		outarr[st.top()] = -1;
		st.pop();
	}

	for (int i = 0; i < N; i++) {
		cout << outarr[i] << " ";
	}


	return 0;
}