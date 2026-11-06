#include<iostream>
using namespace std;

int main(){
int rem;int answer=0;
int num;
cout<<"enter the number:";
cin>>num;
int mul=1;
//octa to decimal
while(num){

    rem=num%10;
    num/=10;
    answer=rem*mul+answer;
    mul=mul*8;

}
cout<<"this is decimal conversion:"<<endl;
cout<<answer<<endl;
int num2=answer;
int rem2;
int mul1=1;
int answer1=0;
//decimal to binary
while(num2>0){

    rem2=num2%2;
    num2=num2/2;
    answer1=rem2*mul1+answer1;
    mul1=mul1*10;
}
cout<<"this is the binary conversion:"<<endl;
cout<<answer1;
}

    


