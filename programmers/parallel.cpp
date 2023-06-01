#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    int size, answer = 0;
    float dif_x, dif_y, slope1, slope2;
    // 0,1 vs 2,3
    slope1 = (float)(dots[0][1]-dots[1][1])/(float)(dots[0][0]-dots[1][0]);
    slope2 = (float)(dots[2][1]-dots[3][1])/(float)(dots[2][0]-dots[3][0]);
    if (slope1 == slope2) {
        answer = 1;
    }
    //0,2 vs 1,3
    slope1 = (float)(dots[0][1]-dots[2][1])/(float)(dots[0][0]-dots[2][0]);
    slope2 = (float)(dots[1][1]-dots[3][1])/(float)(dots[1][0]-dots[3][0]);
    if (slope1 == slope2) {
        answer = 1;
    }
    //0,3 vs 1,2
    slope1 = (float)(dots[0][1]-dots[3][1])/(float)(dots[0][0]-dots[3][0]);
    slope2 = (float)(dots[1][1]-dots[2][1])/(float)(dots[1][0]-dots[2][0]);
    if (slope1 == slope2) {
        answer = 1;
    }
    return answer;
}