#include <string>
#include <vector>

using namespace std;

bool check_eq(string str) {
    int op_idx = str.find(" + ");
    int eq_idx = str.find(" = ");
    int end_idx = str.length()-1;
    int x,y,z;
    string a = "343";
    
    if (op_idx != string::npos) {
        x = stoi(str.substr(0, op_idx));
        y = stoi(str.substr(op_idx+3, eq_idx-op_idx-3));
        z = stoi(str.substr(eq_idx+3));
        if ((x + y) == z) {
            return true;
        } else {
            return false;
        }
    } else {
        op_idx = str.find(" - ");
        x = stoi(str.substr(0, op_idx));
        y = stoi(str.substr(op_idx+3, eq_idx-op_idx-3));
        z = stoi(str.substr(eq_idx+3));
        if ((x - y) == z) {
            return true;
        } else {
            return false;
        }
    }
    return true;
}

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    int q_size = quiz.size();
    string q;
    for (int i = 0; i < q_size; i++) {
        q = quiz[i];
        if (check_eq(q)) {
            answer.push_back("O");
        } else {
            answer.push_back("X");
        }
    }
    return answer;
}