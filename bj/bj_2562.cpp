#include <iostream>

using namespace std;

int main() {
	int num, max_num = -1, max_idx;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &num);
		if (num > max_num) {
			max_num = num;
			max_idx = i;
		}
	}
	printf("%d\n", max_num);
	printf("%d", max_idx+1);
}
