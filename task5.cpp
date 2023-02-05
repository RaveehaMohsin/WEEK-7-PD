#include <iostream>
using namespace std;

int triangle(int number);
main()
{
    int number; 
    int sum;
    cout << "Enter the sequence of triangle = ";
    cin >> number;
    sum =  triangle(number);
    cout << sum;

}

int triangle(int number)
{
    int num1= 0;
    int num2 = 1;
    int sum = 0;
   for (int counter = 1 ; counter <= number ; counter ++)
    {
        sum = num1+ num2;
        num1= sum ;
        num2 ++ ;
    }

    return sum;
}

   
    
