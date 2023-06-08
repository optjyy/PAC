#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int solution(vector<vector<int>> lines) {
    int answer = 0;
    int size;
    vector<pair<int, int>> overwraps;
    vector<pair<int, int>> ranges;
    sort(lines.begin(), lines.end());
    for (int i = 0; i < 2; i++) {
        for (int j = i+1; j < 3; j++) {
            if (lines[i][1] <= lines[j][0]) {
                continue;
            } else {
                overwraps.push_back({lines[j][0],min(lines[i][1], lines[j][1])});
                // 앞 선분의 끝이 뒷선분의 시작보다 클 때
                // answer += min(lines[i][1], lines[j][1])-lines[j][0];
            }
        }
    }
    size = overwraps.size();
    if (size > 0) 
        ranges.push_back(overwraps[0]);
    for (int i = 1; i < size; i++) {
        for (int j = 0; j < ranges.size(); j++) {
            if (ranges[j].second < overwraps[i].first) {
                ranges.push_back(overwraps[i]);
            } else {
                if (ranges[j].second < overwraps[i].second) {
                    ranges[j].second = overwraps[i].second;
                }
            }
        }
    }
    for (int i = 0; i < ranges.size(); i++) {
        answer += ranges[i].second - ranges[i].first;
    }
    return answer;
}