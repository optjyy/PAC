#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int n = board.size();
    int answer = 0;
    int jdx;
    int b_size;
    bool re;
    vector<int> basket;
    for (auto move : moves) {
        jdx = move -1;
        for (int i = 0; i < n; i++) {
            if (board[i][jdx] != 0) {
                basket.push_back(board[i][jdx]);
                board[i][jdx] = 0;
                break;
            }
        }
    }
    re = true;
    while(re) {
        re = false;
        b_size = basket.size();
        for (int k = 0; k < b_size-1; k++) {
            if (basket[k] == basket[k+1]) {
                basket[k] = -1;
                basket[k+1] = -1;
                answer += 2;
                re = true;
                basket.erase(basket.begin()+k+1);
                basket.erase(basket.begin()+k);
                break;
            }
        }
    }
    return answer;
}