#include <iostream>
using namespace std;

class Trip
{
private:
    int tripID;
    double distance;
    double baseFare;
    double finalFare;

public:
    Trip(int id, double d, double fare){
        tripID = id;
        distance = d;
        baseFare = fare;
        finalFare = 0;
    }
    double fare(){
        finalFare = baseFare + distance * 10;
        return finalFare;
    }
    double fare(int waitingTime)
    {
        finalFare = baseFare + distance * 10 + waitingTime * 5;
        return finalFare;
    }
    double fare(int waitingTime, int discount)
    {
        double amount;
        amount = baseFare + distance * 10 +  waitingTime * 5;
        finalFare = amount - (amount * discount / 100.0);
        return finalFare;
    }

    void display()
    {
        cout << "Trip ID: " << tripID << endl;
        cout << "Distance: " << distance << " km" << endl;
        cout << "Base Fare: " << baseFare << endl;
        cout << "Final Fare: " << finalFare << endl;
    }

    friend void compareFare(Trip t1, Trip t2);
};

void compareFare(Trip t1, Trip t2)
{
    if (t1.finalFare < t2.finalFare)
    {
        cout << "Trip " << t1.tripID << " is cheaper.\n";
    }
    else if (t2.finalFare < t1.finalFare)
    {
        cout << "Trip " << t2.tripID << " is cheaper.\n";
    }
    else
    {
        cout << "Both trips have the same fare.\n";
    }
}

int main()
{
    Trip *t1 = new Trip(101, 10, 50);
    Trip *t2 = new Trip(102, 15, 60);

    t1->fare();
    t2->fare(10, 20);

    cout << "Trip 1 Details:"<<endl;
    t1->display();

    cout << "\nTrip 2 Details:\n"<<endl;
    t2->display();
    compareFare(*t1, *t2);

    delete t1;
    delete t2;
    return 0;
}