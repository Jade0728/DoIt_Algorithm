#include <iostream>
using namespace std;
#include <vector>
int main() {
	vector<int> A;
	A.push_back(1);//�������� 1�߰�
	A.insert(A.begin(), 7); //�� �տ� 7 ����
	A.insert(A.begin() + 2, 5);

	A[4] = 5; //������

	A.pop_back(); //������ �� ����
	A.erase(A.begin() + 3);
	A.clear(); //��� �� ����

	A.size();//A�� ũ�� ���ϱ�
	A.front();//A�� ó����
	A.back();//������ ��
	A.at(5);//index5�� �ش��ϴ� ��
	A.begin();//ù��° ������ ��ġ
	A.end();//������ �������� ������ġ

}