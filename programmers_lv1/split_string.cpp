#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    char x;
    int arr[2] = {0,0};
    int len = s.length();;
    bool restart = true;
    for (int i = 0; i < len; i++) {
        if (restart) {
            arr[0] = 0;
            arr[1] = 0;
            answer += 1;
            x = s[i];
            restart = false;
        }
        if (s[i] == x) {
            arr[0] += 1;
        } else {
            arr[1] += 1;
        }
        if (arr[0] == arr[1]) {
            restart = true;
        }
    }

    
    return answer;
}