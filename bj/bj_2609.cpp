#include <iostream>

using namespace std;

int main() {
	int num1, num2, i, common_divisor, common_multiple;
	scanf("%d %d", &num1, &num2);
	
	// find max common divisor
	common_divisor = 1;
	for (i = 2; i <= num1; i++) {
		if ((num1 % i == 0) && (num2 % i == 0)) {
			common_divisor = i;
		}
	}
	printf("%d\n", common_divisor);
	// find min common multiple 
	common_multiple = num1*num2/common_divisor;
	// find 
	printf("%d\n", common_multiple);
	return 0;
}