#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comparewith(pair<int, int> p1, pair<int, int> p2) {
	if (p1.first == p2.first) {
		return (p1.second < p2.second);
	} else {
		return (p1.first < p2.first);
	}
}

int main() {
	int i, j, N, a, b;
	cin >> N;
	vector<pair<int, int>> points;
	for (i = 0; i < N; i++) {
		cin >> a >> b;
		points.push_back({a,b});
	}
	sort(points.begin(), points.end(), comparewith);
//	sort(points.begin(), points.end());
	for (i = 0; i < N; i++) {
		cout << points[i].first << ' ' << points[i].second << '\n';
	}
	return 0;
}