#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compareWith(pair<int,int>p1, pair<int,int> p2) {
	if (p1.second == p2.second) {
		return (p1.first < p2.first);
	}
	return (p1.second < p2.second);
}


int main() {
	int N, x, y;
	vector <pair<int, int>> points;
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		points.push_back({x,y});
	}
	sort(points.begin(), points.end(), compareWith);
	for (int i = 0; i < N; i++) {
		printf("%d %d\n", points[i].first, points[i].second);
	}
	return 0;
}