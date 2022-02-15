#include<iostream>
#include <bits/stdc++.h>
#include<conio.h>
#include<string.h>
#include<vector>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n], check[n],j=-1;
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
		check[i]=0;
	}
	for (int i=0;i<n;i++)
	{
		if (a[i] >= 0)
		{
			check[a[i]]=1;
		}
	}
	for (int i=0;i<n;i++)
	{
	 if (check[i]==0)
	 {
	 	j=i;
		break;	
	 }	
	}
	cout<<j<<endl;
	for (int i=0;i<n;i++)
	{
		cout<<check[i];
	}
	getch();
	return 0;
}
