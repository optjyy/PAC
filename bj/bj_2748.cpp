#include <iostream>

using namespace std;

int main() {
	int n, i;
	long long a, b, f_num;
	scanf("%d", &n);

	if (n == 1) {
		printf("%d", 1);
		return 0;
	}
	a = 0;
	b = 1;
	// when n is bigger than 1
	for (i = 2; i <= n; i++) {
		f_num = a + b;
//		printf("%lld %lld %lld\n",a,b,f_num);
		a = b;
		b = f_num;
		
	}
	printf("%lld", f_num);
	return 0;
}