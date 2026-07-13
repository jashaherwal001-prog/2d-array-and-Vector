#include<iostream>
using namespace std;

int main(){
    //This is for 2d array intialization
    int arr[3][3];
    //Enter The elements of array
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cin>>arr[row][col];
        }
    }
    //This is for printing the lements of array
      for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cout<<arr[row][col]<<"\t";
        }cout<<"\n";
    }
    return 0;
}