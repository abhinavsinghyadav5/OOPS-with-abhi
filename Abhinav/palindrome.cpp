#include<iostream>
using namespace std;
int main()
{
    int num,temp,rev=0,rem;
     cout<<"Name - Abhinav Singh Yadav"<<endl<<"Sec-L"<<endl<<"University roll no.-2018070"<<endl<<"B.tech (cse)"<<endl;
    cout<<"Enter the number"<<endl;
    cin>>num;
    temp=num;
    while (temp>0)
    {
        rem=temp%10;
        rev=(rev*10)+rem;
        temp=temp/10;
    }
    if(rev==temp)
        cout<<"Number is palindrome"<<endl;
    else
        cout<<"Number is not palindrome"<<endl;
    return 0;
}