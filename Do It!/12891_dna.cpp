#include <iostream>
using namespace std;
#include <vector>
int S, P;
int myarr[4];
int checkarr[4];
int checked = 0;
int res = 0;
void Add(char c);
void Remove(char c);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//입력받기
	cin >> S >> P;
	string str;
	cin >> str;

	for (int i = 0; i < 4; i++) {
		cin >> checkarr[i];
		if (checkarr[i] == 0)checked++; 
	}

	//초기문자열보내기
	for (int i = 0; i < P; i++) {
		Add(str[i]);
	}
	if (checked == 4) res++;

	//슬라이딩 윈도우 처리
	for (int i = P; i < S; i++) {
		int j = i - P;
		Add(str[i]);
		Remove(str[j]);
		if (checked == 4) {
			res++;
		}
	}
	cout << res;
	return 0;
}
void Add(char c) {
	switch (c){
	case 'A': 
		myarr[0]++; 
		if (myarr[0] == checkarr[0]) checked++;
		break;
	case'C':
		myarr[1]++;
		if (myarr[1] == checkarr[1]) checked++;
		break;
	case 'G':
		myarr[2]++;
		if (myarr[2] == checkarr[2]) checked++;
		break;
	case 'T':
		myarr[3]++; 
		if (myarr[3] == checkarr[3]) checked++;
		break;
	
	}
}

void Remove(char c) {
	switch (c) {
	case 'A':
		if (myarr[0] == checkarr[0]) checked--;
		myarr[0]--;
		break;
	case'C':
		if (myarr[1] == checkarr[1]) checked--;
		myarr[1]--;
		break;
	case 'G':
		if (myarr[2] == checkarr[2]) checked--;
		myarr[2]--;
		break;
	case 'T':
		if (myarr[3] == checkarr[3]) checked--;
		myarr[3]--;
		break;
	
	}

}