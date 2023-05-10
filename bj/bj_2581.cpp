#include <iostream>

using namespace std;

bool check_prime(int num);

int main() {
	int M, N, min_result, sum = 0;
	scanf("%d", &M);
	scanf("%d", &N);
	min_result = N+1;
	for (int i = M; i <= N; i++) {
		if (check_prime(i)) {
			if (min_result > i) {
				min_result = i;
			}
			sum += i;
		} 
	}
	if (sum == 0) {
		printf("%d\n", -1);
	} else {
		printf("%d\n", sum);
		printf("%d\n", min_result);	
	}
	
	return 0;
}

bool check_prime(int num) {
	if (num == 1) {
		return false;
	} else if (num == 2) {
		return true;
	}
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}