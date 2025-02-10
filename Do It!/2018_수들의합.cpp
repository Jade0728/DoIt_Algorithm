#include <iostream>
using namespace std;
#include <vector>
int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	cin >> N;

	int pos1 = 1; int pos2 = 1;
	int sum = 1;
	int cnt = 1;

	while (pos2 != N) {
		if (sum == N) {
			cnt++;
			pos2++;
			sum = sum + pos2;
		}
		else if (sum > N) {
			sum = sum - pos1;
			pos1++;
		}
		else {
			pos2++;
			sum = sum + pos2;
		}
	}
	cout<< cnt<< "\n";
	return 0;
}