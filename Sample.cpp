#include<iostream>
using namespace std;


int main() {
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n;
    cin>>n;
    int i = 1;
    int j = 1;
    while (i<=n){
        //spaces 1
        int s1=1;
        while (s1<=(n/2)-i+1){
            cout<<" ";
            s1+=1;
        }
        //stars

        if (j<=(n/2)+1){
            while (j<=(2*i-1)){
                cout<<"*";
                j+=1;
            }

        }
        else {
            //spaces 2
            int s2=1;
            while(s2<=(n/2)+i){
                cout<<" ";
                s2+=1;
            }
            int k=1;
            while (k<=(j-2)){
                cout<<"*";
                k+=1;
            }
        }
        i+=1;
        cout<<endl;
    }
    
}
