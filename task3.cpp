#include<iostream>
using namespace std;
int sum_of_digits(int x);
int main(){
int num,sum;
cout <<"Enter any number:";
cin>> num;
sum=sum_of_digits(num);
cout<<sum;


}
int sum_of_digits(int x)
{
    int sum=0,y=x;
    for(int i=1;y!=0;i++){

x=y%10;
sum=sum+x;
y=y/10;


}
return sum;

}