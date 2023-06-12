#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int siz = section.size();
    int max_val = section[siz-1], min_val = section[0];
    int start = -1, end = -1;
    int answer = 0;
    for (int i = 0; i < siz; i++) {
        if (end >= section[i]) {
            continue;
        } else {
            start = section[i];
            end = section[i] + m-1;
            answer += 1;
        }
    }
    
    return answer;
}