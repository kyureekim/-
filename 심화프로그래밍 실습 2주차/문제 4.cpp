#include <iostream>
#include <string>
using namespace std;
int main() {
	string a;
	cout << "���ڿ��� �Է��ϼ���>>";
	getline(cin, a);
	//���ĺ� �ҹ��� ĳ��Ʈ
	int alp_a(0);
	//���ĺ� �빮�� ī��Ʈ
	int alp_A(0);
	for (int i = 0; i < a.length(); i++) {
		//�ƽ�Ű �ڵ带 �̿��ؼ� ��ҹ��� ī��Ʈ �սô�.
		if (a.at(i) > 64 && a.at(i) < 91) {//A~Z������ �ƽ�Ű �ڵ�
			alp_A++;
		}
		else if (a.at(i) > 96 && a.at(i) < 123) {//a~z ������ �ƽ�Ű�ڵ�
			alp_a++;
		}
	}
	//������ ���� ���
	cout << "���ڿ� ���� �빮�ڴ� " << alp_A << "��" << endl;
	cout << "���ڿ� ���� �ҹ��ڴ� " << alp_a << "��" << endl;
	
	
	//�˻��� ���ڿ�
	string s;
	cout << "�˻��� ���ڿ��� �Է��ϼ���>>";
	getline(cin,s);
	//���ε� �Լ��� �̿��� �˻�
	if (a.find(s) > 0&& a.find(s) <a.length() ) {
		cout << s << "�� " << a.find(s) << "���� ���۵˴ϴ�.";
	}
	else {
		cout << "�������� �ʽ��ϴ�.";
	}

	
	system("pause");

}