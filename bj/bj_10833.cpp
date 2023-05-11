#include <iostream>

using namespace std;

int main() {
	int i, j, N, student, apple, result = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d %d", &student, &apple);
		result += apple%student;
	}
	printf("%d", result);
	return 0;
}