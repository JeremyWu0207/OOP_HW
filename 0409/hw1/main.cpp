#include <iostream>
#include "matrix.h"

using namespace std;

int main() {
    int N;
    cout << "Input N: ";
    if (!(cin >> N)) return 0;

    matrix A(N), B(N), C(N);
    
    cout << "\nInput matrix A: ";
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> A.mat[i][j];
        }
    }
    
    cout << "\nInput matrix B: ";
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> B.mat[i][j];
        }
    }

    while (true) {
        cout << "\n1-Addition\n2-Subtraction\n3-Mutiplicaion\n4-Divition\n5-Exit\n";
        int choice;
        cin >> choice;

        if (choice == 5) {
            break;
        }

        // 依靠傳遞指標記憶體位置 (&A, &B) 進行運算
        if (choice == 1) {
            C.add(&A, &B);
        } else if (choice == 2) {
            C.sub(&A, &B);
        } else if (choice == 3) {
            C.multiple(&A, &B);
        } else if (choice == 4) {
            C.divide(&A, &B);
        }
        
        // 運算結束後，直接在外部存取 C 的屬性來輸出 (不使用 print 函式)
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                cout << C.mat[i][j] << (j == N - 1 ? "" : " ");
            }
            cout << "\n";
        }
    }

    return 0;
}
