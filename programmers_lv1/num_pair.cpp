#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(string X, string Y) {
    int len_X = X.length(), len_Y = Y.length();
    unordered_map<int,int> x_um;
    unordered_map<int,int> common_um;
    string answer = "";
    int key, val, cnt = 0;
    for (int i = 0; i < len_X; i++) {
        key = X[i]-'0';
        x_um[key]++;
    }
    for (int i = 0; i < len_Y; i++) {
        key = Y[i]-'0';
        if (x_um[key] > 0) {
            x_um[key]--;
            common_um[key]++;
            cnt++;
        }
    }
    if (cnt == 0) {
        answer = "-1";
        return answer;
    }
    for (key = 9; key >= 1; key--) {
        val = common_um[key];
        for (int j = 0; j < val; j++) {
            answer += ('0'+key);
        }
    }
    val = common_um[0];
    if (answer.length() == 0) {
         answer += '0';
    } else {
        for (int j = 0; j < val; j++) {
            answer += '0';
        }
    }
    // for (const auto& elem : common_um) {
    //     answer += '0'+elem.first;
    //     answer += '0'+elem.second;
    // }
    return answer;
}