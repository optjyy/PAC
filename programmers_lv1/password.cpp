#include <string>
#include <vector>
#include <map>
using namespace std;

string solution(string s, string skip, int index) {
    map<char,int> mp;
    string new_s ="";
    int idx = 0;
    char key;
    string answer = "";
    // skip을 제외한 new_s만들기
    int skip_size = skip.size();
    for (int i = 0; i < 'z'-'a'+1; i++) {
        key = 'a'+i;
        if (skip.find(key) != string::npos) {
            continue;
        }
        new_s += key;
    }
    // 변환하기
    int news_size = new_s.size();
    for (auto spelling : s) {
        for (int i = 0; i < news_size; i++) {
            if (spelling == new_s[i]) {
                idx = (i+index)% news_size;
                answer += new_s[idx];
            }
        }
    }
    
    return answer;
}