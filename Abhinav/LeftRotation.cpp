#include <iostream>
using namespace std;
int main()	
{
	int n,d;
	cout<<"Enter the value of n and d"<<endl;
	cin>>n>>d;
	int a[n];
	cout<<"enter the array elements : ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"array elements after rotation : ";
	for(int i=0;i<n;i++)
	{
		cout<<a[(i+d)%n]<<" "<<endl;
	}
	return 0;
}
