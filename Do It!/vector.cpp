#include <iostream>
using namespace std;
#include <vector>
int main() {
	vector<int> A;
	A.push_back(1);//마지막에 1추가
	A.insert(A.begin(), 7); //맨 앞에 7 삽입
	A.insert(A.begin() + 2, 5);

	A[4] = 5; //값변경

	A.pop_back(); //마지막 값 삭제
	A.erase(A.begin() + 3);
	A.clear(); //모든 값 삭제

	A.size();//A의 크기 구하기
	A.front();//A의 처음값
	A.back();//마지막 값
	A.at(5);//index5에 해당하는 값
	A.begin();//첫번째 데이터 위치
	A.end();//마지막 데이터의 다음위치

}