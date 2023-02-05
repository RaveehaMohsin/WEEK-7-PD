#include<iostream>
using namespace std;

void sequence(int number);

main()
{
    int number;
    cout << "Enter a given number = ";
    cin >> number;
    sequence(number);

    
}

void sequence(int number)
{
 
  
for(int count = 1;count <= number ; count = count +1)
{
    
    if (count % 4 == 0)
    {
        int amplify;
        
        
        amplify = count*10;
        cout << amplify;
        
    }

    else
{
cout << count << ",";
}
    cout << endl;




    
}






}


