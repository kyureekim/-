#include <iostream>
using namespace std;

int main()
{
	int num;
	char name[20];
	int grade;
	cout << "학번을 입력하세요>>" ;
	cin >> num;//입력
	cout << "이름을 입력하세요>>";
	cin >> name;//입력
	cout << "학년을 입력하세요>>";
	cin >> grade;//입력
	//출력
	cout << "학번:" << num<< endl;
	cout << "이름:" << name << endl;
	cout << "학년:" << grade << endl;
}