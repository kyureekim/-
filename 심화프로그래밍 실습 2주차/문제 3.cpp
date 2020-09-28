#include <iostream>
#include<string>
using namespace std;

class Integer {
private:
	int number;

public:
	Integer(int num)//int 형 매개변수를 갖는 생성자
	{
		number = num;
	}
	Integer(string num)//string 형 매개변수를 갖는 생성자 
	{
		number = stoi(num);//string형인 num을 int형으로 변환
	}
	//함수 선언부
	int get();
	void set(int set);
	bool isEven();
};

int Integer::get() {//number를 리턴하는 함수
	return number;
}
void Integer::set(int set)//number를 셋하는 함수
{
	number = set;
	 
}
bool Integer::isEven()//짝수인지 확인하는 함수
{
	if (number % 2 == 0)//짝수
	{
		return true;
	}
	else return false;//홀수

}

int main()
{
	Integer n(30);//int형 매개변수를 가지는 생성자 호출 객체 생성
	cout << n.get() << ' ';//number 출력
	n.set(50);//50으로 셋하기
	cout << n.get() << ' ';

	Integer m("300");//string형 매개변수를 가지는 생성자 호출 객체 생성
	cout << m.get() << ' ';
	cout << m.isEven();//짝수인지 아닌지

}
