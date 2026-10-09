#include <iostream>
using namespace std;

class Score {
    int value;

public:
    Score(int v = 0) {
        value = v;
    }

    Score operator++() {
        ++value;
        return *this;
    }

    Score operator++(int) {
        Score temp = *this;
        value++;
        return temp;
    }

    void display() {
        cout << value << endl;
    }
};

int main() {
    Score s1(10), s2;

    s2 = ++s1;
    cout << "Prefix result: ";
    s2.display();

    cout << "Current score: ";
    s1.display();

    s2 = s1++;
    cout << "Postfix result: ";
    s2.display();

    cout << "Current score: ";
    s1.display();

    return 0;
}