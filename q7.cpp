#include <iostream>
using namespace std;

class InventoryItem {
    int id, quantity;
    double price;

public:
    InventoryItem(int i, double p, int q) {
        id = i;
        price = p;
        quantity = q;
    }

    InventoryItem operator+(InventoryItem item) {
        if (id != item.id || price != item.price) {
            cout << "Incompatible inventory items!" << endl;
            return *this;
        }

        return InventoryItem(id, price,
                             quantity + item.quantity);
    }

    void display() {
        cout << "Product ID: " << id
             << ", Price: " << price
             << ", Quantity: " << quantity << endl;
    }
};

int main() {
    InventoryItem a(101, 50, 10);
    InventoryItem b(101, 50, 20);

    InventoryItem c = a + b;

    cout << "First item: ";
    a.display();

    cout << "Second item: ";
    b.display();

    cout << "Combined item: ";
    c.display();

    return 0;
}