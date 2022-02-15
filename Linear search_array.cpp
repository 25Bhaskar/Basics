#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,a,search;
	cout<<"enter size of an array : ";
	cin>>n;
	int arr[n];
	for (int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter element to be search :";
	cin>>search;
	for (int j=0;j<n;j++)
	{
		if (arr[j]==search)
		{
			a=j;
			break;
		}
	}
	cout<<"at index :"<<a<<" search value : "<<search<<" is present";
	getch();
	return 0;
}
