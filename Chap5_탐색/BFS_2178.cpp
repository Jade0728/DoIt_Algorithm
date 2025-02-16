#include<iostream> 
#include<queue> 
using namespace std;
//�����¿� Ž��
static int dx[] = { 0,1,0,-1 };
static int dy[] = { 1,0,-1,0 };
static int n, m;
static int A[101][101];
static bool visited[101][101] = { false };
void BFS(int i, int j);

void BFS(int i, int j) {
	queue<pair<int, int>> myqueue; //(����, ����) ���� �����ϴ� ť
	myqueue.push(make_pair(i, j)); // (i, j)��� �� ���� ���� ����� push

	while (!myqueue.empty()) {
		int now[2];
		now[0] = myqueue.front().first;
		now[1] = myqueue.front().second;
		myqueue.pop();
		visited[i][j] = true;

		for (int k = 0; k < 4; k++) {
			int x = now[0] + dx[k];
			int y = now[1] + dy[k];

			if (x >= 0 && y >= 0 && x < n && y < m) {
				if (A[x][y] != 0 && !visited[x][y]) {
					visited[x][y] = true;
					A[x][y] = A[now[0]][now[1]] + 1; //�����ذ��鼭 ���ڼ���
					myqueue.push(make_pair(x, y));
				}
			}
		}
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;
	//���ڿ� �޴� ��ĵ� ����صα�!
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < m; j++) {
			A[i][j] = s[j] - '0';
		}
	}

	BFS(0, 0);
	cout << A[n - 1][m - 1];

	return 0;
}