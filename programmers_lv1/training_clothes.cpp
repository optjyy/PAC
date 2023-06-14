#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    map<int,int> m;
    int answer = 0;
    for (int i = 1; i <= n; i++) {
        m[i]++;
    }
    
    for (auto l : lost) {
        m[l]--;
    }
    for (auto r : reserve) {
        m[r]++;
    }
    for (int i = 1; i <= n; i++) {
        if (m[i] == 0) {
            if ((i >= 2) && (m[i-1] == 2)) {
                m[i]++;
                m[i-1]--;
            } else if ((i < n) && (m[i+1] == 2)) {
                m[i]++;
                m[i+1]--;
            }
        } 
    }
    
    for (int i = 1; i <= n; i++) {
        if (m[i] == 1 || m[i]==2) {
            answer += 1;
        }
    }
    
    return answer;
}