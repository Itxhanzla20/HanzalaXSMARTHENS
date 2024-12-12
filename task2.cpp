#include<iostream>
using namespace std;
int total_digits(int num);
int main(){
 int x=0,num;
cout<<"Enter the number:";
cin>>num;
if(num==0)
cout<<"1";
else{
   x=total_digits(num);

cout<<x;
}

}
int total_digits(int num)
{
int x;
for (int i = 1;num!=0;i++)
{
   num=num/10;
   x=x+1;
}
return x;
}