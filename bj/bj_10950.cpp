#include <iostream>

using namespace std;

int main() {
	int T, i;
	int num1, num2;
	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		scanf("%d %d", &num1, &num2);
		printf("%d\n", num1+num2);
	}
}