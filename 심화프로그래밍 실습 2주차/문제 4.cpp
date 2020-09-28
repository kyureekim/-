#include <iostream>
#include <string>
using namespace std;
int main() {
	string a;
	cout << "문자열을 입력하세요>>";
	getline(cin, a);
	//알파벳 소문자 캐운트
	int alp_a(0);
	//알파벳 대문자 카운트
	int alp_A(0);
	for (int i = 0; i < a.length(); i++) {
		//아스키 코드를 이용해서 대소문자 카운트 합시다.
		if (a.at(i) > 64 && a.at(i) < 91) {//A~Z까지의 아스키 코드
			alp_A++;
		}
		else if (a.at(i) > 96 && a.at(i) < 123) {//a~z 까지의 아스키코드
			alp_a++;
		}
	}
	//각각의 개수 출력
	cout << "문자열 내에 대문자는 " << alp_A << "개" << endl;
	cout << "문자열 내에 소문자는 " << alp_a << "개" << endl;
	
	
	//검색할 문자열
	string s;
	cout << "검색할 문자열을 입력하세요>>";
	getline(cin,s);
	//파인드 함수를 이용한 검색
	if (a.find(s) > 0&& a.find(s) <a.length() ) {
		cout << s << "는 " << a.find(s) << "부터 시작됩니다.";
	}
	else {
		cout << "존재하지 않습니다.";
	}

	
	system("pause");

}