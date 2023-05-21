	#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	int i, j,k, vec_size, N, len, min_len = 51, min_idx, cnt = 0, del = 0, del_idx;
	char first_l;
	string buffer, shortest, before;
	vector<string> words;
	vector<string> sort_words;
	scanf("%d", &N);
	// 입력
	for (i = 0; i < N; i++) {
		cin >> buffer;
		words.push_back(buffer);
	}
	printf("\n\n");
	
	for (i = 0; i < N; i++) {
		vec_size = words.size();
		min_len = 51;
		del = 0;
		for (j = 0; j < vec_size; j++) {
			len = words[j].length();
			if (min_len > len) {
				min_len = len;
				min_idx = j;
			} else if (min_len == len) {
				if (words[min_idx] == words[j]) {
					cout << "same " << min_idx << words[min_idx] << " " << j << " " << words[j] << endl;
//					words.erase(words.begin()+j);
					del = 1;
					del_idx = j;
					break;
				} else {
					for (k = 0; k < len; k++) {
						if (words[min_idx][k] > words[j][k]) {
							min_idx = j;
							break;
						}
					}
				}
			}
		}
		if (del > 0) {
			
//			cout << "del val : " << words[del_idx] << endl;
			words.erase(words.begin()+del_idx);
			for (j = 0; j < vec_size-1; j++) {
				cout << words[j] << " ";
			}
			cout << endl;		
		} else {
			sort_words.push_back(words[min_idx]);
			before = words[min_idx];
			words.erase(words.begin()+min_idx);
//			cout << "min val : " << before << endl;
//			for (j = 0; j < vec_size-1; j++) {
//				cout << words[j] << " ";
//
//			}
			cout << endl;
		}
		
		
	} 
	for (i = 0; i < N; i++) {
		cout << sort_words[i] << endl;
	}
	
//	for (i = 0; i < N; i++) {
//		min_val = 51;
//		first_l = 'z' + 1;
//		len = words[i].length();
//		if (min_val > len) {
//			min_val = len;
//			first_l = words[i][0];
//			shortest = words[i];
//			idx = i;
//		} else if (min_val == len) {
//			if (first_l > words[i][0]) {
//				first_l = words[i][0];
//				shortest = words[i];
//				idx = i;
//			} else if (first_l == words[i][0]) {
//				if (words[i] == before) {
//					words.erase(words.begin() + i);
//					continue;
//				}
//			}
//		}
//		cout << i << shortest << endl;
//		before = shortest;
//		words.erase(words.begin() + i);
//	}
	return 0;
}
