#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    int *ids = new int[n];

    cout << "Enter student IDs:\n";
    for (int i = 0; i < n; i++) {
        cin >> ids[i];
    }

    int key;
    cout << "Enter ID to search: ";
    cin >> key;

    int *ptr = ids;
    int position = 1;
    bool found = false;

    while (ptr < ids + n) {
        if (*ptr == key) {
            found = true;
            break;
        }
        ptr++;
        position++;
    }

    if (found)
        cout << "ID found at position " << position << endl;
    else
        cout << "ID not found" << endl;

    delete[] ids;

    return 0;
}
