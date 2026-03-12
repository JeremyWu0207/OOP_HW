#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int cnt = 0, is_valid = 1;

    for (char c : s) {
        if (c == '(') {
            cnt++;
        }
        else if (c == ')') {
            cnt--;
            if (cnt < 0) {
                is_valid = 0;
                break;
            }
        }
    }

    if (is_valid == 1 && cnt == 0) {
        cout << "valid";
    }
    else {
        cout << "invalid";
    }
    return 0;
}
