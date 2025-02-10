#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main() {
	int N;
	cin >> N;
	vector <int> num(N, 0);
	for (int i = 0; i < N; i++) {
		cin >> num[i];
	}

	sort(num.begin(), num.end());
	int i,j;
	int cnt = 0;

	for (int w = 0 ; w < N; w++) {
		int want = num[w];
		i = 0; j = N - 1;

		while (i < j) {

			if (i == w) {
				i++;
				continue;
			}
			if (j == w) {
				j--;
				continue;
			}
			
			if(num[i] + num[j] == want) {
				cnt++;
				break;
			}
			else if (num[i] + num[j] > want) {
				j--;
			}
			else {
				i++;
			}	

		}
	}

	cout << cnt ;
	return 0;
}
