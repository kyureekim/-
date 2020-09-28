#include<iostream>
using namespace std;

class Rec// 사각형 클래스 선언 
{
public:
	int width;
	int length;//넓이와 높이  변수선언
	int getspace();//넓이 구하는 멤버함수

};
class Tri//삼각형 클래스 선언
{
public:
	int width;
	int length;//넓이와 높이 변수 선언
	double getspace();//넓이 구하는 멤버함수

};

int Rec::getspace()//사각형의 넓이 구하는 함수
{
	return width * length;
}

double Tri::getspace()//삼각형의 넓이 구하는 함수
{
	return (width * length)/2;
}

int main()
{
	Rec r;//사각형 클래스 선언
	Tri t;//삼각형 클래스 선언

	cout << "사각형의 너비와 높이를 입력해주세요>>";
	cin >> r.width >> r.length;//사각형 클래스 멤버 변수 입력

	cout << "삼각형의 너비와 높이를 입력해주세요>>";
	cin >> t.width >> t.length;//삼각형 클래스 멤버 변수 입력

	cout << "사각형의 넓이는"<<r.getspace()<<endl;//사각형 클래스의 넓이 함수출력
	cout << "삼각형의 넓이는" << t.getspace() << endl;//삼각형 클래스의 넓이 함수 출력 
}