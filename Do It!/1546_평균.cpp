#include <iostream>
using namespace std;
#include <vector>
int main() {
	int N=0;
	cin >> N;

	vector <int> score(N);
	int max = 0;
	double mean = 0;
	for (int i = 0; i < N; i++) {
		cin >> score[i];
		if (max < score[i]) max = score[i];
	}
	for (int j = 0; j < N; j++) {
		mean+= (double)score[j] / max * 100;
	}
	cout << mean/N;
	return 0;
}