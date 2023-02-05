#include<iostream>
using namespace std;

void patients(int countofPatients);

main()
{
    int days;
    int patients;
    int doctor = 7;
    int untreated = 0;
    int treated= 0;

    cout << "Enter the given time interval = ";
    cin >> days;
    for(int x = 1 ; x <= days; x ++)
    {
        cin >> patients;
        if((x%3 == 0) && (untreated - treated > 0))
        {
            doctor = doctor + 1;
        }
        if(patients > doctor)
        {
            treated = treated + doctor;
            untreated = untreated + (patients - doctor);
        }

        else
        {
            treated = treated + patients;
        }

    }

    cout << "TREATED PATIENTS = ";
    cout << treated << endl;
    cout << "UNTREATED PATIENTS= ";
    cout << untreated;
}
    
       