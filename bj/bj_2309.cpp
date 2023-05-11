#include <iostream>
#include <algorithm>
//#include <string.h>
using namespace std;

int main() {
	int dwarf[9], sum = 0, res, ex1, ex2;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &dwarf[i]);
		sum += dwarf[i];
	}
	res = sum - 100;
	for (int i = 0; i < 9; i++) {
		for (int j = i+1; j < 9; j++) {
			if (res == (dwarf[i] + dwarf[j])) {
				ex1 = dwarf[i];
				ex2 = dwarf[j];
			}
		}
	}
	sort(dwarf, dwarf+9);
	for (int i = 0; i < 9; i++) {
		if (dwarf[i]== ex1 || dwarf[i]==ex2) {
			continue;
		} 
		printf("%d\n", dwarf[i]);
	}
	return 0;
}
