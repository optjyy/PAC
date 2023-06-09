#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// int mincommon(int a, int b) {
//     // 최소공배수 구하기
//     if  (a < b) {
//         // a가 더 큰 수로 만듬.
//         swap(a,b);
//     }
    
    
// }


vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int numer3, denom3;
    bool again = true;
    denom3 = denom1 * denom2;
    numer3 = numer1 * denom2 + numer2 * denom1;
    while (again) {
        again = false;
        for (int i = 2; i <= denom3; i++) {
            if ((numer3 % i == 0) && (denom3 % i == 0)) {
                numer3 /= i;
                denom3 /= i;
                again = true;
                break;
            }
        }
    }
    answer.push_back(numer3);
    answer.push_back(denom3);
    return answer;
}