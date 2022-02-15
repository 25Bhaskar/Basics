#include<iostream>
#include <bits/stdc++.h>
#include<conio.h>
#include<string.h>
#include<vector>
using namespace std;

int main()
{//Maximum till i
	int i,ind,n,mx=-9;
	int v[n]; 
	cout<<"Enter array size :";
	cin>>n;
	for (i=0;i<n;i++)
	{
	 cin>>v[i];
	}
	
	for (i=0;i<n;i++)
	{
		mx=max(mx,v[i]);
	
	}
	
	cout<<mx;
	
	getch();
	return 0;
}
