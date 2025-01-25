#include <iostream>
using namespace std;
void title_check(int age,char gender);
int main() {
   int age;
   char gender;
   string title;
   cout<<"Enter your age:";
   cin>>age;
   cout<<"Enter your gender(m/f)";
   cin>>gender;
   title_check(age,gender);

    return 0;
}
void title_check(int age,char gender){
    if(gender=='m'&&age>=16)
    cout<<"Your title is: Mr.";
    if(gender=='m'&&age<16)
    cout<<"Your title is: Master";
    if(gender=='f'&&age>=16)
    cout<<"Your title is: Mrs.";
    if(gender=='m'&&age<16)
    cout<<"Your title is: Miss";

}