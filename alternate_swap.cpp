#include<iostream>
using namespace std;
void swap(int arr[], int n){
    if(n%2==0){

    for(int i=0; i<n; i=i+2){
        swap(arr[i],arr[i+1]);
    }
    }
    else{
        for(int i=0; i<n-1; i=i+2){
        swap(arr[i],arr[i+1]);
    }
    }
}

void printarrey(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
int arr[5]={1,2,3,4,5};
int brr[6]={1,2,3,4,5,6};
swap(arr,5);
swap(brr, 6);
printarrey(arr,5);
cout<<endl;
printarrey(brr,6);
}
