#include <iostream>
#include <vector>

using namespace std;

class Matrix {
private:
    int N;
    vector<vector<int>> data;

public:
    // 建構子
    Matrix(int size) : N(size), data(size, vector<int>(size, 0)) {}

    void setElement(int r, int c, int val) {
        if (r >= 0 && r < N && c >= 0 && c < N) {
            data[r][c] = val;
        }
    }

    void print() const {
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }

    // 靜態方法：加法
    static Matrix* add(Matrix* a, Matrix* b) {
        if (a->N != b->N) return nullptr;
        Matrix* result = new Matrix(a->N);
        for (int i = 0; i < a->N; ++i) {
            for (int j = 0; j < a->N; ++j) {
                result->data[i][j] = a->data[i][j] + b->data[i][j];
            }
        }
        return result;
    }

    // 靜態方法：減法
    static Matrix* sub(Matrix* a, Matrix* b) {
        if (a->N != b->N) return nullptr;
        Matrix* result = new Matrix(a->N);
        for (int i = 0; i < a->N; ++i) {
            for (int j = 0; j < a->N; ++j) {
                result->data[i][j] = a->data[i][j] - b->data[i][j];
            }
        }
        return result;
    }

    // 靜態方法：乘法
    static Matrix* multiple(Matrix* a, Matrix* b) {
        if (a->N != b->N) return nullptr;
        Matrix* result = new Matrix(a->N);
        for (int i = 0; i < a->N; ++i) {
            for (int j = 0; j < a->N; ++j) {
                for (int k = 0; k < a->N; ++k) {
                    result->data[i][j] += a->data[i][k] * b->data[k][j];
                }
            }
        }
        return result;
    }
};
