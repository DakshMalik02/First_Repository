#include <iostream>
using namespace std;
int nth_fibbo(int n){
    if(n==0){
        return 0;
    }
    int a=0;
    int b=1;
    int c;
    while(n--){
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<nth_fibbo(n);
}
