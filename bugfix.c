#include <stdio.h>

int main(int argc, char* argv[]) {

	int i, j = 0;
	for(i = 0; i < 100; ++)
		j += i;
	printf("1...100 sum is \n", j);
	return 0;
}
