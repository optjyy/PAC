#include <iostream>

using namespace std;

int main() {
	int N, point, max_point = -1, sum = 0;	
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &point);
		if (point > max_point) {
			max_point = point;
		}
		sum += point;
	}
	printf("%f", (float)sum/(float)max_point*100.0/(float)N);
	return 0;
}
