#include<iostream>
using namespace std;

class Rec// �簢�� Ŭ���� ���� 
{
public:
	int width;
	int length;//���̿� ����  ��������
	int getspace();//���� ���ϴ� ����Լ�

};
class Tri//�ﰢ�� Ŭ���� ����
{
public:
	int width;
	int length;//���̿� ���� ���� ����
	double getspace();//���� ���ϴ� ����Լ�

};

int Rec::getspace()//�簢���� ���� ���ϴ� �Լ�
{
	return width * length;
}

double Tri::getspace()//�ﰢ���� ���� ���ϴ� �Լ�
{
	return (width * length)/2;
}

int main()
{
	Rec r;//�簢�� Ŭ���� ����
	Tri t;//�ﰢ�� Ŭ���� ����

	cout << "�簢���� �ʺ�� ���̸� �Է����ּ���>>";
	cin >> r.width >> r.length;//�簢�� Ŭ���� ��� ���� �Է�

	cout << "�ﰢ���� �ʺ�� ���̸� �Է����ּ���>>";
	cin >> t.width >> t.length;//�ﰢ�� Ŭ���� ��� ���� �Է�

	cout << "�簢���� ���̴�"<<r.getspace()<<endl;//�簢�� Ŭ������ ���� �Լ����
	cout << "�ﰢ���� ���̴�" << t.getspace() << endl;//�ﰢ�� Ŭ������ ���� �Լ� ��� 
}