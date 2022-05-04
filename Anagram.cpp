#include <iostream>
#include <cctype>
using namespace std;

int count(char arr[]){
    int count=0;
    for (int i=0;arr[i]!='\0';i++){
        count++;
    }
    return count;
}

int chk_anagram(char arr[],char arr1[]){
    int n=count(arr);
    int m=count(arr1);
    bool x=false;
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i]==arr1[j]){
                x=true;
            }
        }
        if(x){
        }
        else{
            cout<<"false";
            return 0;
        }
        x=false;
    }
    cout<<"true";
    return 0;
}

int main(){
    char arr[100],arr1[100];
    cin.getline(arr,100);
    cin.getline(arr1,100);
    chk_anagram(arr,arr1);
}