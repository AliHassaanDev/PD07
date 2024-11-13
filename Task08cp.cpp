#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int count;
    float average, cargoByBus, cargoByTruck, cargoByTrain;
    float price=0;
    float totalTonnage=0;
    float busTonnage=0;
    float truckTonnage=0;
    float trainTonnage=0;
    cout<<"Enter the count of cargo for tranportation: ";
    cin>>count;
    for(int i=1;i<=count;i++)
    {
        int tonnage;
        cout<<"Enter the tonnage of cargo "<<i<<": ";
        cin>>tonnage;
        if(tonnage<=3)
        {
           price=price+tonnage*200;
           busTonnage=busTonnage+tonnage;
        }
        else if (tonnage>3 && tonnage<=11)
        {
            price=price+tonnage*175;
            truckTonnage=truckTonnage+tonnage;
        }
        else
        {
            price=price+tonnage*120;
            trainTonnage=trainTonnage+tonnage;
        }
        totalTonnage=totalTonnage+tonnage;  
    }
    average=price/totalTonnage;
    cargoByBus=(busTonnage/totalTonnage)*100;
    cargoByTruck=(truckTonnage/totalTonnage)*100;
    cargoByTrain=(trainTonnage/totalTonnage)*100;
    cout<<"Average Price per Ton: "<<fixed<<setprecision(2)<<average<<endl;
    cout<<"Percentage of Cargo by Minibus: "<<fixed<<setprecision(2)<<cargoByBus<<"%"<<endl;
    cout<<"Percentage of Cargo by Truck: "<<fixed<<setprecision(2)<<cargoByTruck<<"%"<<endl;
    cout<<"Percentage of Cargo by Train: "<<fixed<<setprecision(2)<<cargoByTrain<<"%"<<endl;
}