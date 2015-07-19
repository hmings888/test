#include <stdio.h>

int main(int argc, char* argv[]) {
	int i = 0; j = 0;
	for(i = 0; i < 100; ++i) {
		printf("i=%d\n", i);
		j += i;
	}
	printf("j = %d\n", j);
	return 0;
}
