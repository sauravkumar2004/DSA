#include<iostream>
using namespace std;
int main(){
    int arr[3]={1,2,3};
    int i=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    int j=n-1;
    while(i>=0){
        cout<<arr[i];
        i--;
    }
    cout<<endl;
    for(int i=0;i<=2;i++){
        cout<<arr[i];
    }
}