#include<iostream>
using namespace std;

class Date {
private:
	int year;
	int month;
	int day;//private으로 년월일 멤버 변수 선언
public:
	Date(int y, int m, int d)//생성자 3개의 인트형매개변수로 년월일 받기
	{
		year = y;
		month = m;
		day = d;

	}
	Date(int date)//생성자 1개의 인트형 매개변수로 한번에 년월일 받기
	{
		year = date / 10000;//년
		day = date % 100;//일
		month = (date % 10000 - day)/100 ;//월
	}
	void show()//private로 선언된 변수를 접근하여 년월일을 출력하는 함수
	{
		cout << year << "년" << month << "월" << day << "일" << endl;
	}
	int getYear()//년도에 접근하는 함수
	{
		return year;
	}
	int getMonth()//월에 접근하는 함수
	{
		return month;
	}
	int getDay()//일에 접근하는 함수
	{
		return day;
	}
};

int main()
{
	Date birth(2014, 3, 20);//객체 생성 생성자는 매개변수가 3개인것
	Date independenceDay(19450815);//객체 생성 매개변수가 1개인것
	independenceDay.show();//출력하는 함수 
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}

