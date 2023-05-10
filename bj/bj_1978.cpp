#include <iostream>

using namespace std;

void check_prime(int n, int *count);

int main() {
	int i, N, num, cnt = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &num);
		check_prime(num, &cnt);
//		printf("%d\n", num);
	}
	printf("%d", cnt);
	return 0;
}

void check_prime(int n, int *count) {
//	printf("%d %d\n", n, *count);
	if (n == 1) {
		return;
	} else if (n == 2) {
		*count += 1;
		return;
	} else {
		for (int i = 2; i < n; i++) {
			if (n % i == 0) {
				return;
			}
		}
	}
	*count += 1;
	return;
}