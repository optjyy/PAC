#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board) {
    int answer = 0;
    int n = board.size();
    int x, y;
    vector<vector<int>> new_board;
    vector<int> row;
    for (int i = 0; i < n; i++) {
        row.push_back(0);
    }
    for (int i = 0; i < n; i++) {
        new_board.push_back(row);
    }
    vector<pair<int,int>> dirs = {{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1}};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j]  == 0)
                continue;
            // 지뢰인 경우 지뢰표시
            new_board[i][j] = board[i][j];
            for (int k = 0; k < 8; k++) {
                // 지뢰 주변을 위험지역 2로 표시
                x = i + dirs[k].first;
                y = j + dirs[k].second;
                if ((x >= 0) && (x < n) && (y >= 0) && (y < n)) {
                    new_board[x][y] = 2;
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (new_board[i][j] == 0) {
                answer += 1;
            }
        }
    }
    
    return answer;
}