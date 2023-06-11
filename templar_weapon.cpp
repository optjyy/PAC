#include <string>
#include <vector>
#include <unordered_map>

using namespace std;
int make_weapon(int num, int lim, int pow) {
    int result = 1;
    if (num == 1) {
        return 1;
    }
    unordered_map <int,int> um;
    while(num > 1) {
        for (int i = 2; i <= num; i++) {
            if (num % i == 0) {
                num /= i;
                um[i]++;
                break;
            }
        }
    }
    for(auto elem : um){
        // cout<<"key : "<<elem.first<<" value : "<<elem.second<<endl;
        result *= (elem.second+1);
    }
    if (result > lim) {
        result = pow;
    }
    return result;
}

int solution(int number, int limit, int power) {
    int answer = 0;
    for(int i = 1; i <= number; i++) {
        answer += make_weapon(i, limit, power);
    }
    return answer;
}
