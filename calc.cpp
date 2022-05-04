#include <iostream>
using namespace std;
void calculator(int n,char a,int m){
    if (a=='+'){
        cout<<"n + m = "<<(n+m)<<endl;
    }
    else if(a=='-'){
        cout<<"n - m = "<<(n-m)<<endl;
    }
    else if(a=='*'){
        cout<<"n * m = "<<(n*m)<<endl;
    }
    else if(a=='/'){
        cout<<"n / m = "<<(n/m)<<endl;
    }
    else if (a=='^'){
        cout<<"n ^ m = "<<(n^m)<<endl;
    }
    else{
        cout<<"Enter a valid operator out of +,-,*,/,^";
    }
}
int main(){
    double n,m;
    char a;
    cin>>n>>a>>m;
    calculator(n,a,m);
}