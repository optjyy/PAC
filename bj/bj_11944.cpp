#include <iostream>
#include <string>

using namespace std;

int main() {
	int N, M, small;
	string result ="";
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++) {
		result += to_string(N);
	}
	small = min(N*N, M);
	cout << result.substr(0, small);
	return 0;
}