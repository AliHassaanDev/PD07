#include<iostream>
using namespace std;
void printStars(int rowSize);
int main()
{
    int rowSize;
    cout<<"Enter the number of rows: ";
    cin>>rowSize;
    printStars(rowSize);
}
void printStars(int rowSize)
{
    for(int row=1;row<=rowSize;row++)
    {
        for(int col=1;col<=row;col++)
        {
            cout<<'*';
        }
        cout<<endl;
    }
    
}