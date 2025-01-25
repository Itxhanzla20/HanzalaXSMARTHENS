#include <iostream>
using namespace std;
float total_income(string screening_type,int rows,int columns);
int main() {
    int rows,columns;
    string screening_type;
    float income;
    cout<<"Enter the screening type (premiere,normal,discount) ";
    cin>>screening_type;
    cout<<"Enter the no. of columns ";
    cin>>columns;
    cout<<"Enter th no. of rows ";
    cin>>rows;
    income=total_income(screening_type,rows,columns);
    cout<<income;
    return 0;
}
float total_income(string screening_type,int rows,int columns){
    float amount;
    if(screening_type=="premiere")
    amount=12*rows*columns;
    if(screening_type=="normal")
    amount=7.50*rows*columns;
    if(screening_type=="discount")
    amount=5*rows*columns;
    return amount;

}