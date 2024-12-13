#include<iostream>
using namespace std;
int evensum(int n1,int n2);
int main(){
    int start,end,sum;
    cout<<"Enter the starting number:";
    cin>>start;
    cout<<"Enter the ending number:";
    cin>>end;
    sum=evensum(start,end);
    cout<<"Sum of even numbers in givn range:"<<sum;
    return 0;
    
}
int evensum(int n1,int n2){
    int sum=0;
   for(int i=n1;i<=n2;i++)
   {
    if(i%2==0)
    sum=sum+i;
   }
   return sum;
}