#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    bool mult_mode = false;
    bool diff_mode = true;
    float mult;
    if (common[0] != 0) {
        mult = common[1]/common[0];
    } else {
        mult = 0;
    }
    
    int diff = common[1]-common[0];
    int answer = 0;
    int size = common.size();
    for (int i = 1; i < size; i ++) {
        // if (common[i-1]*mult != common[i]) {
        //     diff_mode = true;
        //     break;
        // } else 
        if (common[i]-common[i-1] != diff) {
            mult_mode = true;
            diff_mode = false;
            break;
        }
    }
    if (mult_mode) {
        answer = common[size-1] * (int)mult;
    } else if(diff_mode) {
        answer = common[size-1] + diff;
    }
    
    return answer;
}