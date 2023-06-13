#include <string>
#include <vector>

using namespace std;

vector<string> words;

bool check_word(string bab) {
    int b_len = bab.length();
    int w_len;
    bool match = true;
    int cur = 0;
    while(match && (cur < b_len)) {
        match = false;
        for (int j = 0; j < 4; j++) {
            w_len = words[j].length();
            if(words[j] == bab.substr(cur, w_len)) {
                if (cur >= w_len) {
                    if (words[j] == bab.substr(cur-w_len, w_len)) {
                        match = false;
                        break;
                    }
                }
                cur += w_len;
                match = true;
                break;
            }
        }
    }
    if (cur >= b_len) {
        return true;
    } else {
        return false;
    }
}

int solution(vector<string> babbling) {
    int b_size = babbling.size();
    int answer = 0;
    words.push_back("aya");
    words.push_back("ye");
    words.push_back("woo");
    words.push_back("ma");
    for (int i = 0; i < b_size; i++) {
        if (check_word(babbling[i])) {
            answer += 1;
        }
    }
    return answer;
}