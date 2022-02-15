#include<iostream>
#include <bits/stdc++.h>
#include<conio.h>
#include<string.h>
using namespace std;

int main()
{
	int i,arr[5],s;
	for (i=0;i<5;i++)
	{
	 cin>>arr[i];
	}
	sort(arr, arr+5);  
	for (i=0;i<5;i++)
	{
	cout<<arr[i];
	}
	getch();
	return 0;
}
