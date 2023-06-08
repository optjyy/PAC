#include <string>
#include <vector>

using namespace std;
vector<pair<int,int>> moves;
vector<vector<int>> answer;
void move(int x, int y, int *dir, int n) {
    int next_x = x + moves[*dir].first;
    int next_y = y + moves[*dir].second;
    if ((next_x >= n) || (next_x < 0) \
        || (next_y >= n) || (next_y < 0) \
        || (answer[next_x][next_y] != -1)
       ) {
        *dir = (*dir+1) % 4;
    }
    return;
}

vector<vector<int>> solution(int n) {
    
    
    vector<int> row;
    int x = 0, y = 0;
    int dir = 0, end = n*n;
    moves.push_back({0,1});
    moves.push_back({1,0});
    moves.push_back({0,-1});
    moves.push_back({-1,0});
    for (int i = 0; i < n; i++) {
        row.push_back(-1);
    }
    for (int i = 0; i < n; i++) {
        answer.push_back(row);
    }
    for (int i = 1; i <= end; i++) {
        answer[x][y] = i;
        move(x,y,&dir, n);
        x += moves[dir].first;
        y += moves[dir].second;
    }
    return answer;
}