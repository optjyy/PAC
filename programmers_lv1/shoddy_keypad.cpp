#include <string>
#include <vector>
#include <map>
using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    // build cost_map
    int key_size;
    char key;
    int cost;
    map<char,int> c_map;
    for (auto keys : keymap) {
        key_size = keys.size();
        for (int i = 0; i < key_size; i++) {
            cost = i+1;
            key = keys[i];
            if (c_map.find(key)!=c_map.end()) {
                // key가 c_map안에 있을 때 c_map[key] 값보다 cost가 작으면 변경한다.
                if (cost < c_map[key]) {
                    c_map[key] = cost;
                }
            } else {
                // key가 c_map 안에 없을 때는 바로 cost 반영
                c_map[key] = cost;
            }
        }
    }
    vector<int> answer;
    int ans;
    //calculate cost
    for (auto target : targets) {
        ans = 0;
        for (auto t : target) {
            if (c_map.find(t) != c_map.end()) {
                ans += c_map[t];    
            } else {
                ans = -1;
                break;
            }
        }
        if (ans == 0) {
            ans = -1;
        }
        answer.push_back(ans);
    }
    return answer;
}