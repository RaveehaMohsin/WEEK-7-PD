#include <iostream>
using namespace std;


float p1=0,p2=0,p3=0,p1new=0,p2new=0,p3new=0;
main()
{
    float number;
    int range;
    float finalvalue;
    cout << "Count of numbers = ";
    cin >> number;
    for(int count = 1;count <= number ; count = count + 1)
    {
       cin >> range;

    if (range % 2 == 0)
    {
        p1 = p1+1;
        p1new = (p1/number)*100;
    }

    if (range % 3 == 0)
    {
        p2=p2+1;
        p2new = (p2/number)*100;
    }

    if(range % 4 == 0)
    {
        p3=p3+1;
        p3new = (p3/number)*100;
    }
    
    

    }
    cout << p1new << "%" << endl;
     cout << p2new << "%" << endl;
     cout << p3new << "%" << endl;
        
}