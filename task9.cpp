#include<iostream>
using namespace std;
void lefttriange(int rows);
void righttriange(int rows);

main()
{
    int rows;
    cout << "Enter the number of rows = ";
    cin >> rows;
    lefttriange(rows); righttriange(rows);
}
void lefttriange(int rows)
{
    for(int i= 1;i <= rows;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout << "*";
        }
        for(int j = 1;j<=rows;j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void righttriange(int rows)
{
    for(int i = 1;i<=rows;i++)
    {
        for(int j = i;j<=rows;j++)
        {
            cout << " ";
        }
        for(int j = 1 ;j<=i;j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
    