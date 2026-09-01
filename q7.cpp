#include <iostream>
using namespace std;

int main() {
    char sentence[] = "OOPs lab work";
    char *ptr = sentence;

    int upper = 0, lower = 0, spaces = 0;

    while (*ptr != '\0') {
        if (*ptr >= 'A' && *ptr <= 'Z')
            upper++;
        else if (*ptr >= 'a' && *ptr <= 'z')
            lower++;
        else if (*ptr == ' ')
            spaces++;

        ptr++;
    }

    cout << "Uppercase letters: " << upper << endl;
    cout << "Lowercase letters: " << lower << endl;
    cout << "Spaces: " << spaces << endl;

    return 0;
}
