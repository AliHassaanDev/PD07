#include<iostream>
using namespace std;
bool isPrime(int num);
int main()
{
    int number;
    bool prime;
    cout<<"Enter Number: ";
    cin>>number;
    prime=isPrime(number);
    cout<<prime;
}
bool isPrime(int number)
{
    for(int i=2;i<number;i++)
    {
        if (number%i==0)
        {
           return false;
        }
    }
    return true;
}