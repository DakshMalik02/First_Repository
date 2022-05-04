#include <iostream>
using namespace std;

int leap(int birthy, int datey){
    int arr[25]={1940,1944,1948,1952,1956,1960,1964,1968,1972,1976,1980,1984,1988,1992,1996,2000,2004,2008,2012,2016,2020,2024,2028,2032,2036};
    int indexb,indexd;
    for(int i=1;i<=25;i++){
        if(arr[i]>=birthy){
            indexb=i;
            break;
        }
    }
    for(int i=1;i<=25;i++){
        if(arr[i]>datey){
            indexd=i-1;
            break;
        }else if(arr[i]==datey){
            indexd=i;
            break;
        }
    }
        
    return indexd-indexb;

}

int main(){
    int birthY,birthD,birthM,dateY,dateD,dateM,ageY,ageM,ageD;
    cout<<"enter your birthdate in yyyy mm dd format ";
    cin>>birthY>>birthM>>birthD;
    cout<<"enter the current date in yyyy mm dd format ";
    cin>>dateY>>dateM>>dateD;

    ageY=dateY-birthY;
    ageM=ageY*12+(dateM-birthM);
    ageD=ageY*365+(dateD-birthD)+leap(birthY,dateY)+(dateM-birthM)*30;

    cout<<"Your age in years is "<<ageY<<endl;
    cout<<"Your age in months is "<<ageM<<endl;
    cout<<"Your age in days is "<<ageD;
    return 0;
}