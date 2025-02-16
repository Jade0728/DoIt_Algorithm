#include<iostream>
#include<vector> 
#include<algorithm> 
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, m;
	cin >> n;
	vector <int> input(n,0);
	for (int i = 0; i < n; i++) {
		cin >> input[i];
	}
	sort(input.begin(), input.end());

	cin >> m;
	for (int i = 0; i < m; i++) {
		int num;
		cin >> num;
		int s = 0; int e = input.size() - 1;
		bool found = false;

		while (s <= e) {
			int middle= (s + e) / 2;
			if (input[middle] > num) {
				e = middle-1;
			}
			else if (input[middle] < num) {
				s = middle + 1;
			}
			else {
				found = true;
				break;
			}
		}
		if (found) cout << 1 << "\n";
		else cout << 0 << "\n";
	}

	return 0;
}