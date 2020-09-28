#include<iostream>

using namespace std;

void reverse(char *name)//거꾸로 출력하는 함수
{
	for (int i = strlen(name)-1; i >= 0; i--)//공백문자를 제외하고 배열의 끝부터 0까지 출력 
	{
		cout << name[i];
	}
}
int main()
{
	char name[100];
	cout << "문자열을 입력하세요>>";
	cin.getline(name, 100, '\n');//문자 입력 \n을 만날때까지 입력 진행
	
	reverse(name);//거꾸로 출력
	

}