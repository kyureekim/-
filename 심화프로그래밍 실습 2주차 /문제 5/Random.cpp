#include "Random.h"
#include "stdlib.h"
#include "time.h"
Random::Random() {
	//생성되면서 rand 초기화
	srand((unsigned)time(NULL));
}

int Random::gseneratoy() {
	return rand() % 100 + 1;
}