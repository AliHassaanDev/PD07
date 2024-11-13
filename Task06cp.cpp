#include<iostream>
using namespace std;

int primorial(int number);
int main()
{
    int number,result;
    cout<<"Enter Number: ";
    cin>>number;
    result=primorial(number);
    cout<<result;
}
int primorial(int number)
{
    int product=1;
    int count=1;
    int i=2;
    while(count<=number)
    {
        int check=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                check++;
                break;
            }
        }
        if(check==0)
        {
            count++;
            product=product*i; 
        }        
        i++;    
    }
    return product;
}