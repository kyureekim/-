#include <iostream>
#include<string>
using namespace std;

class Integer {
private:
	int number;

public:
	Integer(int num)//int �� �Ű������� ���� ������
	{
		number = num;
	}
	Integer(string num)//string �� �Ű������� ���� ������ 
	{
		number = stoi(num);//string���� num�� int������ ��ȯ
	}
	//�Լ� �����
	int get();
	void set(int set);
	bool isEven();
};

int Integer::get() {//number�� �����ϴ� �Լ�
	return number;
}
void Integer::set(int set)//number�� ���ϴ� �Լ�
{
	number = set;
	 
}
bool Integer::isEven()//¦������ Ȯ���ϴ� �Լ�
{
	if (number % 2 == 0)//¦��
	{
		return true;
	}
	else return false;//Ȧ��

}

int main()
{
	Integer n(30);//int�� �Ű������� ������ ������ ȣ�� ��ü ����
	cout << n.get() << ' ';//number ���
	n.set(50);//50���� ���ϱ�
	cout << n.get() << ' ';

	Integer m("300");//string�� �Ű������� ������ ������ ȣ�� ��ü ����
	cout << m.get() << ' ';
	cout << m.isEven();//¦������ �ƴ���

}
