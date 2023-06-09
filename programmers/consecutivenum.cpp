#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    int start, end;
    int base;
    int dif;
    if (num % 2) {
        // when num is odd
        base = total/num;
        dif = (num-1)/2;
        start = base - dif;
        end = base + dif;
    } else {
        // when num is even
        base = total/num;
        dif = num/2;
        start = base - (dif-1);
        end = base + dif;
    }
    for (int i = start; i <= end; i++) {
        answer.push_back(i);            
    }
    return answer;
}