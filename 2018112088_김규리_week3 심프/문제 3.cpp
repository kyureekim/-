#include<iostream>

using namespace std;

void reverse(char *name)//�Ųٷ� ����ϴ� �Լ�
{
	for (int i = strlen(name)-1; i >= 0; i--)//���鹮�ڸ� �����ϰ� �迭�� ������ 0���� ��� 
	{
		cout << name[i];
	}
}
int main()
{
	char name[100];
	cout << "���ڿ��� �Է��ϼ���>>";
	cin.getline(name, 100, '\n');//���� �Է� \n�� ���������� �Է� ����
	
	reverse(name);//�Ųٷ� ���
	

}