#include<iostream>
#include<vector> 
using namespace std;
static vector <vector <int>> fri;
static vector <bool> tf; 
static bool arrive;
void Friend_DFS(int v, int depth);
//재귀의 깊이가 5이상 인것이 있으면 1출력, 없으면 0출력

void Friend_DFS(int v, int depth) {
	 
	if (arrive || depth==5) {
		arrive = true;
		return;
	}

	tf[v] = true;
	for (int i : fri[v]) {
		if (!tf[i]) {  
			Friend_DFS(i, depth+1);
		}
	}
	tf[v] = false;  //백트랙킹 매우 중요!!!!!
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, e;
	cin >> n >> e;

	fri.resize(n + 1 );
	tf.resize(n + 1 ); 

	for (int i = 0; i < e; i++) {
		int f1, f2;
		cin >> f1 >> f2;
		fri[f1].push_back(f2);
		fri[f2].push_back(f1);
	}
	 
	for (int i = 0; i < n; i++) {  
		 
		Friend_DFS(i,1);
		if (arrive) { 
			break; 
		}
	}

	if (arrive) cout << 1;
	else cout << 0;
	return 0;
}