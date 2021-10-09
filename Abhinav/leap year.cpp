#include<iostream>
using namespace std;
int main()
{
 int year;
 cout<<"Name - Abhinav Singh Yadav"<<endl<<"Sec-L"<<endl<<"University roll no.-2018070"<<endl<<"B.tech (cse)"<<endl;
 cout<<"Enter year"<<endl;
 cin>>year;
        if(year%4==0)
 {
         if(year%100==0)
     {
             if(year%400==0)
         cout<<year<<" "<<"Is a leap year"<<endl;
         else
         cout<<year<<" "<<"Is not a leap year"<<endl;
     }
     else
     cout<<year<<" "<<"Is a leap year"<<endl;

 }
  else
 cout<<year<<" "<<"Is not a leap year"<<endl;
 return 0;
}