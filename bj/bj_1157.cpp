#include <iostream>
#include <string.h>
using namespace std;

int main() {
	char spell[100], word[1000000];
	int cnt[100] = {0}, A = (int)'A', a = (int)'a', idx, max_idx;
	int max_cnt = -1, check_samevalue = 0, len;
	
	scanf("%s", word);
//	printf("%s", word);
	len = strlen(word);
	for (int i = 0; i < len; i++) {
		idx = (int)word[i] - a;
		if (idx < 0) {
			idx = (int)word[i] - A;
		}
		cnt[idx] += 1;
		if (max_cnt < cnt[idx]) {
			max_cnt = cnt[idx];
			max_idx = idx;
		}
	}
	for (int i = 0; i < 100; i++) {
		if (cnt[i] == max_cnt) {
			check_samevalue += 1;
		}
	}
	if (check_samevalue == 1) {
		printf("%c", (char)(max_idx+A));
	} else {
		printf("?");
	}
	
	
	return 0;
}
