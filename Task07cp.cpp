#include <iostream>
using namespace std;

int main()
{
    int days;
    int doctors=7;
    cout<<"Enter the number of days you visited Hospital: ";
    cin>>days;
    int treated=0;
    int untreated=0;
    for(int i=1;i<=days;i++)
    {
        int patient;
        cout<<"Number of patients who visited on day "<<i<<": ";
        cin>>patient;
        if(i%3==0 && untreated>treated)
        {
            doctors=doctors+1;
        }
        if(patient<=7)
        {
            untreated=0;
            treated=treated+patient;
        }
        else
        {
            treated=treated+doctors;
            untreated=untreated+(patient-doctors);
        }
    }
    cout<<"Treated patient: "<<treated<<endl;
    cout<<"Untreated patients: "<<untreated;
}