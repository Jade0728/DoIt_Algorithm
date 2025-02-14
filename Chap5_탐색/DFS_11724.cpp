#include<iostream>
#include<vector> 
using namespace std;
//방향 없는 그래프가 주어졌을 때, 연결 요소 (Connected Component)의 개수를 구하는 프로그램을 작성하시오.
static vector <vector <int>>arr;
static vector <bool> tf;
void DFS(int v);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, e;
	cin >> n >> e;

	arr.resize(n + 1);
	tf.resize(n + 1);

	for (int i = 0; i < e; i++) {
		int n1,n2;
		cin >> n1>>n2;
		arr[n1].push_back(n2);
		arr[n2].push_back(n1);
	}

	int cnt = 0;

	for (int i = 1; i <= n; i++) {
		if (!tf[i]) {
			cnt++;
			DFS(i);
		}
	}

	cout << cnt;

	return 0;
}
void DFS(int v) {
	if (tf[v]) {
		return;
	}

	tf[v] = true;

	for (int p : arr[v]) { //** arr[v]와 연결된 모든 정점 p에 대해 반복문을 실행
		if (tf[p] == false) {
			DFS(p);

		}
	}
}