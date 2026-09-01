#include <iostream>
using namespace std;

void findHighestPrice(float *price, int n) {
    float highest = *price;

    for (int i = 1; i < n; i++) {
        price++;
        if (*price > highest) {
            highest = *price;
        }
    }

    cout << "Highest price: " << highest << endl;
}

int main() {
    float prices[7] = {45.5, 120.0, 89.99, 150.75, 60.25, 99.5, 130.0};

    findHighestPrice(prices, 7);

    return 0;
}
