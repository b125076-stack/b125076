#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of parking slots: ";
    cin >> n;

    int *slots = new int[n];

    cout << "Enter slot status for each slot (0 for available, 1 for occupied):\n";
    for (int i = 0; i < n; i++) {
        cin >> slots[i];
    }

    int available = 0, occupied = 0;
    int *ptr = slots;

    for (int i = 0; i < n; i++) {
        if (*(ptr + i) == 0)
            available++;
        else if (*(ptr + i) == 1)
            occupied++;
    }

    cout << "\nAvailable slots = " << available << endl;
    cout << "Occupied slots = " << occupied << endl;

    delete[] slots;

    return 0;
}
