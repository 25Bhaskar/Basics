#include<iostream>
#include <bits/stdc++.h>
#include<conio.h>
#include<string.h>
#include<vector>
using namespace std;
//sum of subarray
int main()
{
	int i,j,s=0,n;
	int arr[n]; 
	cout<<"Enter array size :";
	cin>>n;
	for (i=0;i<n;i++)
	{
	 cin>>arr[i];
	}
	cout<<"number of subarray : "<<n*(n+1)/2<<endl;
	for (i=0;i<=n-1;i++)
	{
		for (j=i;j<=n-1;j++)
		{
		s=s+arr[j];
		cout<<s<<endl;
		}
	
	}
	cout<<"sum : "<<s;
	getch();
	return 0;
}
