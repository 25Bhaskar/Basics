#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>
int main()
{
	int n,j;
	cin>>n;
	int arr[n];
	for (int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for (j=0;j<n;j++)
	{
		for (i=j;i<n;i++)
		{
			for (int k=i;k<j;k++)
			{
			  cout<<arr[k];	
			}
		}
		cout<<endl;
	}
	getch();
	return 0;
	
}

