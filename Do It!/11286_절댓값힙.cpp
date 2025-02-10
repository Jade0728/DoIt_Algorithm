#include <iostream>
#include <queue>
using namespace std;

struct compare{
	bool operator()(int a, int b) {
		int first = abs(a);
		int last = abs(b);

		//������ ������ ������ �켱������ ����
		if (first==last) {
			return a > b;
		}
		//������ ���� ���� �켱������ ����
		else {
			return first > last;
		}
	}

};
int main() { 
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	priority_queue<int, vector<int>, compare> q;
	
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		if (temp == 0) {
			if (q.empty()) {
				cout << 0 << '\n'; 
			}
			else {
				cout << q.top() << '\n';
				q.pop();
			}
		}
		else {
			q.push(temp);

		}
	}


	return 0;
}