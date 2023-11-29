#include<iostream>
#include<cstdlib>  
using namespace std;

int main()
{
    cout << "\n\t\t Vehicle PARKING" << endl << endl;
    int enter = 0; 
    int Car = 0, Bike = 0, Rikshaw = 0;

    while (enter != 6) 
    {
        cout << "\tPress 1 to enter the Car" << endl;
        cout << "\tPress 2 to enter the Bike" << endl;
        cout << "\tPress 3 to enter the Rikshaw" << endl;
        cout << "\tPress 4 to show the record" << endl;
        cout << "\tPress 5 to delete the record" << endl;
        cout << "\tPress 6 to exit" << endl << endl;

        cout << "\tEnter your choice :: ";
        cin >> enter;

        if (enter == 1)
        {
            Car++;
            system("CLS");
            cout << "\tCar is added" << endl << endl;
        }
        else if (enter == 2)
        {
            Bike++;
            system("CLS");
            cout << "\tBike is added" << endl << endl;
        }
        else if (enter == 3)
        {
            Rikshaw++;
            system("CLS");
            cout << "\tRikshaw is added" << endl << endl;
        }
        else if (enter == 4)
        {
            cout << "\tCar " << Car << endl;
            cout << "\tBike " << Bike << endl;
            cout << "\tRikshaw " << Rikshaw << endl << endl;
        }
        else if (enter == 5)
        {
            Car = 0;
            Bike = 0;
            Rikshaw = 0;
            system("CLS");
            cout << "\tAll record is deleted...!" << endl<<endl;
        }
        else if (enter == 6)
        {
            exit(0);
        }
        else
        {
            cout << "\tInvalid Input" << endl;
        }
    }

    return 0;  
}
