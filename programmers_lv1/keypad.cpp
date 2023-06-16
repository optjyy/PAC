#include <string>
#include <vector>
#include <cstdlib>
using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    vector<pair<int,int>> points = {{3,0}, {3,2}};
    int row, col;
    int dist_L, dist_R;
    for (auto num : numbers) {
        if (num == 0) {
            row = 3;
            col = 1;
        } else if ((num == 3) || (num == 6) || (num==9)) {
            row = num/3 -1;
            col = 2;
            answer += "R";
            points[1].first = row;
            points[1].second = col;
            continue;
        } else if ((num == 1) || (num == 4) || (num==7)) {
            row = num/3;
            col = num % 3 - 1;
            answer += "L";
            points[0].first = row;
            points[0].second = col;
            continue;
        } else {
            row = num/3;
            col = num % 3 - 1;
        }
        
        
        dist_L = abs(points[0].first-row) + abs(points[0].second-col);
        dist_R = abs(points[1].first-row) + abs(points[1].second-col);
        
        if (dist_L < dist_R) {
            answer += "L";
            points[0] = {row, col};
        } else if (dist_L > dist_R) {
            answer += "R";
            points[1] = {row, col};
        } else {
            if (hand == "left") {
                answer += "L";
                points[0] = {row, col};
            } else {
                answer += "R";
                points[1] = {row, col};
            }
        }
    }
    return answer;
}