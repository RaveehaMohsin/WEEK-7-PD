#include <iostream>
using namespace std;

void printAsterick(int rows);
main()
{
    int rows;
    cout << "Enter the desired number of rows = ";
    cin >> rows;
    printAsterick(rows);

}

void printAsterick(int rows)
{
    for(int i = 1 ; i <= rows; i=i+1)
    {
        for(int j = 1;j <= i ; j ++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

