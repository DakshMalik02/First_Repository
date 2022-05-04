#include <iostream>
using namespace std;
int taxCalculator(int n,int m){
    int max_sav=100000;
    int taxable;
    int tax;
    if(m<=100000){
        taxable=n-m;
    }
    else{
        taxable=m-100000;
    }
    if (taxable<=100000){
        tax=0;
    }
    else if(taxable<=200000 and taxable>100000){
        tax=(taxable-100000)*0.1;
    }
    else if(taxable<=500000 and taxable>200000){
        tax=(taxable-100000)*0.1+(taxable-200000)*0.2;
    }
    else{
        tax=(taxable-100000)*0.1+(taxable-200000)*0.2+(taxable-500000)*0.3;
    }
    return tax;
}
int main()
{
    int gross,total_sav;
    cout<<"Enter gross salary and total saving: ";
    cin>>gross>>total_sav;
    cout<<taxCalculator(gross,total_sav);
}
