#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    vector<string> words = {"aya", "ye", "woo", "ma"};
    int answer = 0;
    int length, size;
    string bab;
    size = babbling.size();
    for (int i = 0; i < size; i++) {
        length = 0;
        for (int j = 0; j < 4; j++) {
            if (babbling[i].find(words[j]) == string::npos) {
                continue;
            } else {
                length += words[j].length();
            }
        }
        if (length == babbling[i].length()) {
            answer += 1;
        }
    }
    return answer;
}