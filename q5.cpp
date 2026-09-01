#include <iostream>
using namespace std;

void updateVisitors(int *count) {
    int newVisitors;
    cout << "Enter number of newly arrived visitors: ";
    cin >> newVisitors;

    *count = *count + newVisitors;
}

int main() {
    int visitors = 46;

    cout << "Visitor count before update: " << visitors << endl;

    updateVisitors(&visitors);

    cout << "Visitor count after update: " << visitors << endl;

    return 0;
}
