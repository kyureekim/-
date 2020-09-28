#include <iostream>

using namespace std;

int maximum(int *num)//최대값 구하는 함수
{
	int max=0;//최대값

	for (int i = 0; i < 6; i++)//max 보다 배열의 num 값이 크면 max 값변경 
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

	for (int i = 0; i <6; i++)//배열의 합 구하기
	{
		sum += num[i];
	}
	average = sum / 6;//평균 구하기
	return average;

}
int main()
{

	int num[6];//6개 정수 배열 선언
	cout << "숫자 6개를 입력하세요:";
	for (int i = 0; i < 6; i++)//배열 6개 입력
	{
		cin >> num[i];
	}
	cout<<"최대값="<<maximum(num);//최대값 리턴하는 함수 호출
	cout << "평균=" << average(num);//평균 구하는 함수 호출
}