#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    int zero_cnt = 0, match_cnt = 0;
    int min_grade, max_grade;
    vector<int> answer;
    for (int i = 0; i < 6; i++) {
        if (lottos[i] == 0) {
            zero_cnt += 1;
        }
    }
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (lottos[i] == win_nums[j]) {
                match_cnt += 1;
            }
        }
    }
    min_grade = 7 - match_cnt;
    if (min_grade == 7) {
        min_grade = 6;
    }
    max_grade = 7 - match_cnt - zero_cnt;
    if (max_grade == 7){
        max_grade = 6;
    }
    answer.push_back(max_grade);
    answer.push_back(min_grade);
    
    return answer;
}