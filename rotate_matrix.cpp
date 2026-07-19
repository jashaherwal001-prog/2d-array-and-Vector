#include<iostream>
using namespace std;

int main(){
    int matrix[3][3]={
    {1,2,3},
    {4,5,6},
    {7,8,9}
};
int n=3;
//for rotation of matrix by 90degree;
int ans[3][3];
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        ans[j][n-1-i]=matrix[i][j];
    }
}
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<ans[i][j]<<"\t";
    }cout<<"\n";
}
}
