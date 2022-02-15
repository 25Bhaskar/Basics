#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,j,i,k;
	cin>>n;
	int arr[n];
	for (i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for (j=0;j<n;j++)
	{
		for (i=j;i<n;i++)
		{
			for (k=j;k<=i;k++)
			{
			  cout<<arr[k]<<" ";	
			}
			cout<<endl;
		}
		
	}
	getch();
	return 0;
	
}

