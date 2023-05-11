#include <iostream>

using namespace std;

int main() {
	int i,j, T, N, point, point_sum;
	float grade, grade_sum;
	
	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		scanf("%d", &N);
		point_sum = 0;
		grade_sum = 0.0;
		for (j = 0; j < N; j++) {
			scanf("%d %f", &point, &grade);
			point_sum += point;
			grade_sum += grade*(float)point;
//			printf("%d %.1f", point_sum, grade_sum/point_sum);
		}
		printf("%d %.1f\n", point_sum, grade_sum/point_sum);
	}
	return 0;
}