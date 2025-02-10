#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b;
	cin >> a;
	cin >> b;

	vector <int> num(a, 0);

	//입력받기
	for (int i = 0; i < a; i++) {
		cin >> num[i];
	}
	//오름차순 정렬
	sort(num.begin(), num.end());

	int i=0, j=a-1; int cnt = 0;

	while (i <  j) {
			if (num[i]+num[j]==b) {
				cnt++;
				i++; j--;
			}
			else if (num[i] + num[j] > b) {
				j--;
			}
			else {
				i++;
			}
		
	}
	cout << cnt;

	return 0;

}
