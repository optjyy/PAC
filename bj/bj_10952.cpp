#include <iostream>

using namespace std;

int main() {
	int i;
	int num1, num2;
	while(1) {
		scanf("%d %d", &num1, &num2);
		if ((num1 == 0)) {
			break;
		}
		printf("%d\n", num1+num2); 
	}
	return 0;
//	scanf("%d", &T);
//	for (i = 0; i < T; i++) {
//		scanf("%d %d", &num1, &num2);
//		printf("%d\n", num1+num2);
//	}
}