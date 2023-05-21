#include <iostream>
#include <string>

using namespace std;

int main() {
	string line;
	int length, capital, small, blank, num;
	while (1) {
		capital = 0, small = 0, blank = 0, num = 0;
		getline(cin, line);
		length = line.length();
		if (length == 0) {
			break;
		}
//		cout << line << " " + length << endl;
		for (int i = 0; i < length; i++) {
			if (line[i] == ' ') {
				blank += 1;
			} else if ((line[i] >= 'A') && (line[i] <= 'Z')) {
				capital += 1;
			} else if ((line[i] >= 'a') && (line[i] <= 'z')) {
				small += 1;
			}  else {
				num += 1;
			}
		}
		printf("%d %d %d %d\n",small, capital, num, blank);
	}
	return 0;
}