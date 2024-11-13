#include<iostream>
using namespace std;
void dots(int num);
int main()
{
    int num;
    cout<<"Enter the number of the triangle: ";
    cin>>num;
    dots(num);
}
void dots(int num)
{
    int count=0;
    for(int i=0;i<num;i++)
    {
        count=count+(i+1);
    }
    cout<<"Dots in the triangle: "<<count;
}