#include <iostream>

using namespace std;

int maximum(int *num)//�ִ밪 ���ϴ� �Լ�
{
	int max=0;//�ִ밪

	for (int i = 0; i < 6; i++)//max ���� �迭�� num ���� ũ�� max ������ 
	{
		if (max < num[i])
		{
			max = num[i];
		}
	}

	return max;

}

double average(int *num)
{
	int average = 0;
	int sum=0;

	for (int i = 0; i <6; i++)//�迭�� �� ���ϱ�
	{
		sum += num[i];
	}
	average = sum / 6;//��� ���ϱ�
	return average;

}
int main()
{

	int num[6];//6�� ���� �迭 ����
	cout << "���� 6���� �Է��ϼ���:";
	for (int i = 0; i < 6; i++)//�迭 6�� �Է�
	{
		cin >> num[i];
	}
	cout<<"�ִ밪="<<maximum(num);//�ִ밪 �����ϴ� �Լ� ȣ��
	cout << "���=" << average(num);//��� ���ϴ� �Լ� ȣ��
}