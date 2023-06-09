#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    vector<int> table;
    for (int i = 0; i <= 999; i++) {
        table.push_back(0);
    }
    int size = array.size();
    int max_idx, max_val = -1;
    for (int i = 0; i < size; i++) {
        table[array[i]] += 1;
    }
    for (int i = 0; i <= 999; i++) {
        if (table[i] > max_val) {
            max_idx = i;
            max_val = table[i];
        } else if (table[i] == max_val) {
            max_idx = -1;
        }
    }
    int answer = max_idx;
    return answer;
}