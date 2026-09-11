#include <iostream>
using namespace std;

class ParkingFloor
{
private:
    int floorNo;
    int slots;
    int *occupancy;

public:
    ParkingFloor(int f, int s)
    {
        floorNo = f;
        slots = s;
        occupancy = new int[slots];

        for (int i = 0; i < slots; i++)
            occupancy[i] = 0;
    }

    void reserve(int slot)
    {
        if (slot >= 1 && slot <= slots)
        {
            if (occupancy[slot - 1] == 0)
            {
                occupancy[slot - 1] = 1;
                cout << "Slot " << slot << " reserved.\n";
            }
            else
                cout << "Slot already occupied.\n";
        }
    }

    void reserve(int start, int count)
    {
        if (start < 1 || start + count - 1 > slots)
        {
            cout << "Invalid range.\n";
            return;
        }

        for (int i = start - 1; i < start - 1 + count; i++)
        {
            if (occupancy[i] == 1)
            {
                cout << "Some slots are already occupied.\n";
                return;
            }
        }

        for (int i = start - 1; i < start - 1 + count; i++)
            occupancy[i] = 1;

        cout << count << " consecutive slots reserved.\n";
    }

    void display()
    {
        cout << "Floor " << floorNo << ": ";

        for (int i = 0; i < slots; i++)
            cout << occupancy[i] << " ";

        cout << endl;
    }

    ~ParkingFloor()
    {
        delete[] occupancy;
    }
};

int main()
{
    int floors, slots;

    cout << "Enter number of floors: ";
    cin >> floors;

    cout << "Enter number of slots per floor: ";
    cin >> slots;

    ParkingFloor **building = new ParkingFloor *[floors];

    for (int i = 0; i < floors; i++)
        building[i] = new ParkingFloor(i + 1, slots);

    building[0]->reserve(2);
    building[1]->reserve(3, 2);

    for (int i = 0; i < floors; i++)
        building[i]->display();

    for (int i = 0; i < floors; i++)
        delete building[i];

    delete[] building;

    return 0;
}