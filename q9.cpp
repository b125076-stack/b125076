#include <iostream>
using namespace std;

class Matrix {
    int a[2][2];

public:
    void input() {
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                cin >> a[i][j];
    }

    Matrix operator+(Matrix m) {
        Matrix result;

        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                result.a[i][j] = a[i][j] + m.a[i][j];

        return result;
    }

    void display() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++)
                cout << a[i][j] << " ";

            cout << endl;
        }
    }
};

int main() {
    Matrix A, B, C;

    cout << "Enter Matrix A (4 elements):\n";
    A.input();

    cout << "Enter Matrix B (4 elements):\n";
    B.input();

    C = A + B;

    cout << "Matrix A:\n";
    A.display();

    cout << "Matrix B:\n";
    B.display();

    cout << "Resultant Matrix:\n";
    C.display();

    return 0;
}