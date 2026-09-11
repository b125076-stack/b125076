#include <iostream>
using namespace std;

class Inventory
{
private:
    int playerID;
    int numberOfItems;
    int *quantity;

public:
    Inventory(int id, int n)
    {
        playerID = id;
        numberOfItems = n;

        quantity = new int[numberOfItems];

        for (int i = 0; i < numberOfItems; i++)
            quantity[i] = 0;
    }

    void enterInventory()
    {
        cout << "Enter quantity of each item:\n";

        for (int i = 0; i < numberOfItems; i++)
        {
            cout << "Item " << i + 1 << ": ";
            cin >> quantity[i];
        }
    }

    void display()
    {
        cout << "\nPlayer ID: " << playerID << endl;

        cout << "Inventory:\n";

        for (int i = 0; i < numberOfItems; i++)
            cout << "Item " << i + 1 << ": " << quantity[i] << endl;
    }

    friend class GameController;

    ~Inventory()
    {
        delete[] quantity;
    }
};

class GameController
{
public:
    void inspectInventory(Inventory &inv)
    {
        cout << "\nInspecting inventory...\n";

        for (int i = 0; i < inv.numberOfItems; i++)
        {
            cout << "Item " << i + 1  << ": " << inv.quantity[i] << endl;
        }
    }

    void modifyQuantity(Inventory &inv, int item, int newQuantity)
    {
        if (item >= 1 && item <= inv.numberOfItems)
        {
            inv.quantity[item - 1] = newQuantity;

            cout << "Quantity updated successfully.\n";
        }
        else
        {
            cout << "Invalid item number.\n";
        }
    }
};

int main()
{
    int playerID, n;

    cout << "Enter Player ID: ";
    cin >> playerID;

    cout << "Enter number of items: ";
    cin >> n;

    Inventory *inv = new Inventory(playerID, n);

    inv->enterInventory();

    GameController controller;

    controller.inspectInventory(*inv);

    int item, newQuantity;

    cout << "\nEnter item number to modify: ";
    cin >> item;

    cout << "Enter new quantity: ";
    cin >> newQuantity;

    controller.modifyQuantity(*inv, item, newQuantity);

    inv->display();

    delete inv;

    return 0;
}