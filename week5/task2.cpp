#include <iostream>
using namespace std;
char grade(int n);
float avg(int eng,int math,int ss,int chem,int bio);
int main()
{
    string name;
    int english,math,socialscience,chemistry,biology;
    float result;
    cout<<"ENter the name:";
    cin>>name;
    cout << "Enter the marks of English";
    cin >>english;
    cout << "Enter the marks of math";
    cin >>math;
    cout << "Enter the marks ofsocialscience";
    cin >>socialscience;
    cout << "Enter the marks of chemistry";
    cin >>chemistry;
    cout << "Enter the marks of biology";
    cin >>biology;
    cout<<"Student Name:"<<name<<endl;
    cout << avg(english,math,socialscience,chemistry,biology)<<endl;
    result=avg(english,math,socialscience,chemistry,biology);
   
    cout<< grade(result);
}
float avg(int eng,int math,int ss,int chem,int bio){
    float average=(eng+math+ss+chem+bio)/5;
    return average;
}
char grade(int n)
{
    if (n < 50)
        return 'F';
    else if (n >= 50 && n < 60)
        return 'E';
    else if (n >= 60 && n < 70)
        return 'D';
    else if (n >= 70 && n< 80)
        return 'C';
    else if (n>= 80 && n< 90)
        return 'B';
    else if (n >= 90)
        return 'A';
}