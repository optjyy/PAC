#include <iostream>

using namespace std;

int main() {
	int num1 = 0, num2 = 1, next = 1, n;
	scanf("%d", &n);
	for (int i = 1; i < n; i++) {
		next = num1 + num2;
		num1 = num2;
		num2 = next;
	}
	printf("%d", next);
	
	return 0;
}
