#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int a, int b, int c, int d) {
    bool check = a==b==c==d;
    printf("%d", check);
    int p,q,r;
    int answer = 0;
    int sum = 0;
    int comp1 = (a==b) ? 1:0;
    int comp2 = (a==c) ? 1:0;
    int comp3 = (a==d) ? 1:0;
    int comp4 = (b==c) ? 1:0;
    int comp5 = (b==d) ? 1:0;
    int comp6 = (c==d) ? 1:0;
    int min1, min2;
    sum = comp1 + comp2 + comp3 + comp4 + comp5 + comp6;
    if (sum == 0) {
        // min값 구하기
        min1 = min(a,b);
        min2 = min(c,d);
        answer = min(min1, min2);
    } else if (sum == 1) {
        if (comp1) { // a,b
            q = c;
            r = d;
        } else if (comp2) { //a,c
            q = b;
            r = d;
        } else if (comp3) { // a,d
            q = b;
            r = c;
        } else if (comp4) { // b,c
            q = a;
            r = d;
        } else if (comp5) { // b,d
            q = a;
            r = c;
        } else if (comp6) { // c,d
            q = a;
            r = b;
        }
        answer = q*r;
        // 다른 두 값 qxr
    } else if (sum == 2) {
        // 두 값 p,q
        if (comp1) {
            //a,b //c,d
            p = a;
            q = c;
        } else {
            p = a;
            q = b;
        }
        answer = (p > q) ? (p+q)*(p-q) : (p+q)*(q-p);  
    } else if (sum == 3) {
        // 세 값 같을 때
        if (comp1 && comp2) {
            // a,b,c 같을 때
            p = a;
            q = d;
        } else if (comp1 && comp5) {
            // a,b,d 같을 때
            p = a;
            q = c;
        } else if (comp2 && comp6) {
            // a,c,d 같을 때
            p = a;
            q = b;
        } else if (comp4 && comp6) {
            // b,c,d 같을 때
            p = b;
            q = a;
        }
        answer = (10*p+q)*(10*p+q);
    } else if (sum == 6) {
        answer = 1111*a;
    }
    // if ((a == b) && (b==c) && (c==d)) {
    //     answer = a * 1111;
    // } else if()
    return answer;
}