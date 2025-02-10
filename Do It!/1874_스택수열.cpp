#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	cin >> N;

	vector <int> wantarr(N, 0);
	vector <char> resarr;
	stack <int> mystack;
	bool yes = true;

	//배열 입력
	for (int i = 0; i < N; i++) {
		cin >> wantarr[i];
	}
	
	int pop_cnt = 0; //pop을 몇번 했는지
	int num = 1;//오름차순 해야함

	for(int i=0;i<N;i++){
		while (wantarr[i] >= num) {
			mystack.push(num++);
			resarr.push_back('+');
		}

		if (wantarr[i] == num) {
			mystack.pop();
			resarr.push_back('-');
		
		}
		else if(wantarr[i] < num){
			if (!mystack.empty() && mystack.top() == wantarr[i]) {
				mystack.pop();
				resarr.push_back('-');
			}
			else {
				cout << "NO";
				yes = false;
				break;
			}

		}
	}
	if (yes) {
		for (int i = 0; i < resarr.size(); i++) {
			cout << resarr[i] << "\n";
		}
	}
	return 0;
}