#include <iostream>
using namespace std;
float low_price(int n,string period);
int main() {
   int n;
   float lowest_amount;
   string period;
   cout<<"Enter the number of kilometers:";
   cin>>n;
   cout<<"Enter the period(day/night)";
   cin>>period;
   lowest_amount=low_price(n,period);
   cout<<"Lowest price="<<lowest_amount;
    return 0;
}
float low_price(int n,string period){
    float amount;
    if(n<20)
     {if(period=="day")
       amount=0.79*n;
       if(period=="night")
       amount=0.90*n;}
    if(n>=20&&n<100)
      amount=0.90*n;
    if(n>=100)  
       amount=0.06*n;
    return amount;
}
