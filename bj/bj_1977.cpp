#include <iostream>
using namespace std;

int main(void) {
    int M, N, num, sum = 0, min_val;
    cin >> M >> N;
    min_val = N;
    int sqr_num;
    for (int i = 1; i < N; i++) {
        sqr_num = i * i;
        if ((sqr_num >= M) && (sqr_num <= N)) {
            sum += sqr_num;
            if (min_val > sqr_num) {
                min_val = sqr_num;
            }
        }
    }
    if (sum == 0) {
        cout << "-1" << endl;
    } else {
        cout << sum << endl;
        cout << min_val << endl;
    }
    return 0;
}