#include "Random.h"
#include "stdlib.h"
#include "time.h"
Random::Random() {
	//�����Ǹ鼭 rand �ʱ�ȭ
	srand((unsigned)time(NULL));
}

int Random::gseneratoy() {
	return rand() % 100 + 1;
}