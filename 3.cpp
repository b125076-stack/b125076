#include <iostream>
using namespace std;

class SensorGrid
{
private:
    int n;
    double *temperature;

public:
    SensorGrid(int size)
    {
        n = size;
        temperature = new double[n];
    }

    void enterReadings()
    {
        cout << "Enter temperature readings:\n";

        for (int i = 0; i < n; i++)
        {
            cout << "Sensor " << i + 1 << ": ";
            cin >> temperature[i];
        }
    }

    void displayReadings()
    {
        cout << "Temperature readings:\n";

        for (int i = 0; i < n; i++)
            cout << temperature[i] << " ";

        cout << endl;
    }

    void replaceReading(int position, double value)
    {
        if (position >= 1 && position <= n)
        {
            temperature[position - 1] = value;
        }
        else
        {
            cout << "Invalid sensor position.\n";
        }
    }

    double average()
    {
        double sum = 0;

        for (int i = 0; i < n; i++)
            sum += temperature[i];

        return sum / n;
    }

    friend void compareAverage(SensorGrid s1, SensorGrid s2);

    ~SensorGrid()
    {
        delete[] temperature;
    }
};

void compareAverage(SensorGrid s1, SensorGrid s2)
{
    double avg1 = s1.average();
    double avg2 = s2.average();

    cout << "Average of Grid 1: " << avg1 << endl;
    cout << "Average of Grid 2: " << avg2 << endl;

    if (avg1 > avg2)
        cout << "Grid 1 has greater average temperature.\n";
    else if (avg2 > avg1)
        cout << "Grid 2 has greater average temperature.\n";
    else
        cout << "Both grids have the same average temperature.\n";
}

int main()
{
    int n1, n2;

    cout << "Enter number of sensors in Grid 1: ";
    cin >> n1;

    SensorGrid s1(n1);
    s1.enterReadings();

    cout << "\nEnter number of sensors in Grid 2: ";
    cin >> n2;

    SensorGrid s2(n2);
    s2.enterReadings();

    cout << "\nGrid 1:\n";
    s1.displayReadings();

    cout << "Grid 2:\n";
    s2.displayReadings();

    int position;
    double value;

    cout << "\nEnter sensor position to replace in Grid 1: ";
    cin >> position;

    cout << "Enter new temperature: ";
    cin >> value;

    s1.replaceReading(position, value);

    cout << "\nAfter replacement:\n";
    s1.displayReadings();

    cout << endl;

    compareAverage(s1, s2);

    return 0;
}