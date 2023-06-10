#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    string num;
    int len;
    bool save_flag;
    vector<int> answer;
    for (int i = l; i <= r; i++) {
        num = to_string(i);
        len = num.length();
        save_flag = true;
        for (int j = 0; j < len; j++) {
            if ((num[j] == '0') || (num[j] == '5')) {
                continue;
            } else {
                save_flag = false;
                break;
            }
        }
        if (save_flag) {
            answer.push_back(i);
        }
    }
    if (answer.size() == 0) {
        answer.push_back(-1);
    }
    
    return answer;
}
