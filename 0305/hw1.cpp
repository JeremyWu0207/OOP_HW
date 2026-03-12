#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= 9; i++) {
        int end_j = i;
        if (i == m && n > i) {
            end_j = n;
        }

        for (int j = 1; j <= end_j; j++) {
            if (i == j || (j == n && i == m)) {
                if (i * j < 10) {
                    cout << j << "*" << i << "= " << i * j;
                }
                else {
                    cout << j << "*" << i << "=" << i * j;
                }
            }
            else {
                cout << "      ";
            }
            if (j < end_j) {
                cout << " ";
            }
        }
        if (i != 9) cout << endl;
    }
    return 0;
}
