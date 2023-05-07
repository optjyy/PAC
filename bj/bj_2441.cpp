#include <iostream>

using namespace std;

int main() {
	int i, j, N;
	scanf("%d", &N);
	// i is num of star
	for (i = N; i > 0; i--) {
		for (j = 0; j < N-i; j++) {
			printf(" ");
		}
		for (j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
}