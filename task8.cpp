#include <iostream>
using namespace std;

main()
{
    float count;
    float cargoton;
    float minibus=0;
    float truck=0;
    float train = 0;
    float minibusaverage=0;
    float truckaverage=0;
    float trainaverage=0;
    float sum = 0;
    float averagefinal=0;

    cout << "Enter the count of cargo = ";
    cin >> count;
    for(int i = 1;i <= count;i ++)
    {
        cin >> cargoton;
        if(cargoton>=1 && cargoton<=3)
        {
            minibus=minibus+cargoton;
        }

        else if(cargoton >3 && cargoton <= 11)
        {
            truck = truck + cargoton;
        }

        else if(cargoton >11)
        {
            train = train + cargoton;
        }
    }
    sum = minibus+truck+train;
    minibusaverage=(minibus/sum)*100;
    truckaverage =(truck/sum)*100;
    trainaverage = (train/sum)*100;

    averagefinal=((minibus*200)+(truck*175)+(train*120))/sum;

    cout << "Average price per ton of cargo = " << averagefinal  << endl;
    cout << "Percentage of cargo by MINIBUS = " << minibusaverage << "%" << endl;
    cout << "Percentage of cargo by TRUCK = " << truckaverage << "%"  << endl;
    cout << "Percentage of cargo by TRAIN = " <<  trainaverage << "%"  << endl;

}