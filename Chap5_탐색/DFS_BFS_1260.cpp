#include<iostream>
#include<vector> 
#include<queue> 
#include<algorithm>
using namespace std;
static vector<vector<int>> arr;
static queue<int> bfs;
static vector<bool> tf;
static vector<bool> tf2;
void DFS(int v);
void BFS(int v);

void DFS(int v) {
	if (tf[v]) {
		return;
	}
	tf[v] = true; 
	cout << v << " ";

	sort(arr[v].begin(),arr[v].end());
	for (int i : arr[v]) {
		if (!tf[i]) {
			cout << i << " ";
			DFS(i);
		}
	}
}
//BFS는 재귀보다 while을 사용하는게 일반적 
void BFS(int v) {
	bfs.push(v);
	tf2[v] = true;

	while (!bfs.empty()) {
		int node= bfs.front();
		cout << node << ' ';
		bfs.pop();
		sort(arr[node].begin(), arr[node].end());
		for (int p : arr[node]) {
			if (!tf2[p]) {
				tf2[p] = true;
				bfs.push(p);
			}
		}

	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, V;
	cin >> n >> m >> V;
	
	arr.resize(n+1);
	tf.resize(n+1,false);
	tf2.resize(n+1, false);

	for (int i = 0; i < m; i++) {
		int temp1, temp2;
		cin >> temp1 >> temp2;
		arr[temp1].push_back(temp2);
		arr[temp2].push_back(temp1);
	}
	DFS(V);
	cout << "\n";
 	BFS(V);
	return 0;
}
