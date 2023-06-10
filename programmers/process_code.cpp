#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    int len = code.length();
    int mode = 0;
    string answer = "";
    for (int i = 0; i < len; i++) {
        if (code[i] == '1') {
            mode = (mode^1);
            // mode = (mode+1)%2;
        } else {
            if ((mode == 0) && (i%2 == 0)) {
                answer += code[i];
            } else if ((mode == 1) && (i%2 == 1)) {
                answer += code[i];
            }
        }
    }
    if (answer.length()==0)
        answer = "EMPTY";
    return answer;
}
