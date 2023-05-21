#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compareWith(string a, string b) {
	if (a.length() == b.length()) {
		return a < b;
	}
	return a.length() < b.length();
}

int main() {
	int N, len;
	vector<string> words;
	string buffer;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		cin >> buffer;
		words.push_back(buffer);
//		if (find(words.begin(), words.end(), buffer) == words.end()) {
//			words.push_back(buffer);
//		}
	}
	sort(words.begin(), words.end(), compareWith);
	
	len = words.size();
	for (int i = 0; i < len; i++) {
		if (i > 0) {
			if (words[i] == words[i-1]) {
				continue;
			}
		} 
		cout << words[i] << endl;
	}
	return 0;
}