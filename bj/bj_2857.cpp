#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool check_fbi(string str);
int main() {
	string buffer;
	vector<int> agent_idxs;
	int size, len;
	for (int i = 0; i < 5; i++) {
		cin >> buffer;
		len = buffer.length();
		if (check_fbi(buffer)) {
			agent_idxs.push_back(i+1);
		}
	}
	size = agent_idxs.size();
	if (size == 0) {
		cout << "HE GOT AWAY!" << endl;
	}
	else {
		for (int i = 0; i < size; i++) {
			cout << agent_idxs[i] << " ";
		}	
	}
	cout << endl;
	
	return 0;
}

bool check_fbi(string str) {
	if (str.find("FBI") == string::npos) {
		return false;
	} else {
		return true;
	}
}