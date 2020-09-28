#include<iostream>
using namespace std;

class Date {
private:
	int year;
	int month;
	int day;//private���� ����� ��� ���� ����
public:
	Date(int y, int m, int d)//������ 3���� ��Ʈ���Ű������� ����� �ޱ�
	{
		year = y;
		month = m;
		day = d;

	}
	Date(int date)//������ 1���� ��Ʈ�� �Ű������� �ѹ��� ����� �ޱ�
	{
		year = date / 10000;//��
		day = date % 100;//��
		month = (date % 10000 - day)/100 ;//��
	}
	void show()//private�� ����� ������ �����Ͽ� ������� ����ϴ� �Լ�
	{
		cout << year << "��" << month << "��" << day << "��" << endl;
	}
	int getYear()//�⵵�� �����ϴ� �Լ�
	{
		return year;
	}
	int getMonth()//���� �����ϴ� �Լ�
	{
		return month;
	}
	int getDay()//�Ͽ� �����ϴ� �Լ�
	{
		return day;
	}
};

int main()
{
	Date birth(2014, 3, 20);//��ü ���� �����ڴ� �Ű������� 3���ΰ�
	Date independenceDay(19450815);//��ü ���� �Ű������� 1���ΰ�
	independenceDay.show();//����ϴ� �Լ� 
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}

