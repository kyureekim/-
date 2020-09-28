#include <iostream>
#include "Random.h"
using namespace std;
int main() {
	
	
	int n;
	cout << "몇 개의 숫자를 뽑으시 겠습니까? >>";
	cin >> n;
	//랜던갑을 저장할 배열
	int *number = new int[n];
	//100이상의 쓰레기 값으로 초기화
	//혹시모를 오류 방지
	for (int i = 0; i < n; i++) {
		number[i] = 10000;
	}
	//랜덤 숫자 발생
	//r을 for문 내부에서 생성하는 이유는
	//객체 생성자에 srand()를 넣어 놨기 때문에
	//새로 뽑을때마다 srand를 수행해 주기 위함이다.
	cout<< "숫자를 뽑는중이니 기다려 주세요..(숫자가 클수록 오래걸립니다.)" << endl;
	for (int i = 0; i < n; i++) {
		Random r;
		//랜덤값을 임시값에 저장
		int temp = r.gseneratoy();
		//뽑은 랜덤 값이 배열에 있는지를 확인하기 위한 값
		int count(0);
		//뽑은 랜던 값이 이미 존재하는 수일경우 카운트한다.
		for (int j = 0; j < n; j++) {
			if (temp == number[j]) {
				count++;
			}
		}
		//만약 카운트변수가 0이라는것은
		//새로뽑은 랜덤값이 이미 존재 하지 않는 것이기 때문에
		//배열에 저장
		if (count == 0) {
			number[i] = temp;
		}
		else {//0이 아니라는 것은 이미 내부에 존재하는 수이기 때문에
			//i값을 오히려 하나줄여서 배열에 저장된 값을 못쓰게한다.
			i--;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << number[i] << "  " << endl;
	}


	system("pause");
}