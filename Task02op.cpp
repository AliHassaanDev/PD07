#include<iostream>
using namespace std;

void printUpperStars(int rowCenter);
void printLowerStars(int rowCenter);
int main()
{
    int rowSize,rowCenter;
     cout<<"Enter the number of rows: ";
    cin>>rowSize;
    rowCenter=rowSize/2;
    
    printUpperStars(rowCenter);
    printLowerStars(rowCenter);
}
void printUpperStars(int rowCenter)
{
    for(int row=1;row<=rowCenter;row++)
    {
        for(int col=1;col<=rowCenter-row;col++)
        {
            cout<<" ";
        }
        for(int col=1;col<=row;col++)
        {
            cout<<'*';
        }
        cout<<endl;
    }  
}
void printLowerStars(int rowCenter)
{
    for(int row=rowCenter;row>=1;row--)
    {
        for(int col=1;col<=rowCenter-row;col++)
        {
            cout<<" ";
        }
        for(int col=1;col<=row;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }


}