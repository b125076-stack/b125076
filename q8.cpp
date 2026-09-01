#include <iostream>
using namespace std;

void increaseScores(int *scores, int n) {
    for (int i = 0; i < n; i++) {
        *(scores + i) = *(scores + i) + 10;
    }
}

int main() {
    int scores[] = {50, 60, 70, 80, 90};
    int n = sizeof(scores) / sizeof(scores[0]);

    cout << "Scores before adjustment:\n";
    for (int i = 0; i < n; i++) {
        cout << scores[i] << " ";
    }

    increaseScores(scores, n);

    cout << "\nScores after adjustment:\n";
    for (int i = 0; i < n; i++) {
        cout << scores[i] << " ";
    }

    return 0;
}
