#include<iostream>
using namespace std;
void numberAmplify(int num);
int main()
{
    int num;
    cout<<"Enter the number to amplify: ";
    cin>>num;
    numberAmplify(num);
}
void numberAmplify(int num)
{
    for(int i=1;i<=num;i++)
    {
        if(i%4==0)
        {
            cout<<i*10<<", ";
        }
        else{cout<<i<<", ";}
    }
}