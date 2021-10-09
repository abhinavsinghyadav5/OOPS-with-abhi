#include<iostream>
using namespace std;
int addition(int a,int b)
{
    return a+b;
}
int main()
{
	int num1,num2,add;
    cout<<"Name - Abhinav Singh Yadav"<<endl<<"Sec-L"<<endl<<"University roll no.-2018070"<<endl<<"B.tech (cse)"<<endl;
	cout<<"Enter first number"<<endl;
	cin>>num1;
    cout<<"Enter second number"<<endl;
	cin>>num2;
	add = addition(num1,num2);
	cout<<"Additon is:-"<<" "<<add<<endl;
	return 0;	
}
