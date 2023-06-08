#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
    int q_size = query.size();
    int a_size = arr.size();
    int start = 0;
    int end = a_size-1;
    vector<int> answer;
    for (int i = 0; i < q_size; i++) {
        if (i %2 == 0) {
            // 짝수번째 index는 뒷부분을 자른다.
            end = start + query[i];
        } else {
            // 홀수번째 index는 앞부분을 자른다.
            start += query[i];
        }
    }
    for (int i = start; i <= end; i++) {
        answer.push_back(arr[i]);
    }
    return answer;
}