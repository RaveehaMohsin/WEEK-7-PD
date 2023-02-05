#include <iostream>
using namespace std;
void uppertriangle(int rows);
void lowertriangle(int rows);


main()
{
    int rows;
    cout << "Enter the number of rows = ";
    cin >> rows;
    uppertriangle(rows);
    lowertriangle(rows);

}
void uppertriangle(int rows)
{
    for(int i =1;i <= rows/2; i ++)
    {
        for(int j= i;j <=rows/2;j ++)
        {
            cout << " ";
        }
        for(int j =1 ;j<=i;j++)
        {
            cout << "*";
        }
        cout << endl;
    }

}

void lowertriangle(int rows)
{
    for (int i = 1;i<=rows/2;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout << " ";
        }
        for(int j = i;j <= rows/2;j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}