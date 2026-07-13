#include<iostream>
using namespace std;

int main(){
    int arr[3][3];
    int arr_1[3][3];
    cout<<"enter the elements of first array";
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cin>>arr[row][col];
        }
    }
    cout<<"Enter the elements of second array";
     for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cin>>arr_1[row][col];
        }
    }
    cout<<"This is the sum of array";
      for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cout<<arr_1[row][col]+arr[row][col]<<"\t";
        }cout<<"\n";
    }
}