#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main()
{
	int i;
	string a="bhaskar_chauhan";
	
	int temp;
	int s;
	s=a.size();
	for (i=0;i<=s/2;i++)
	{
	 temp=a[i];
     a[i]=a[s-i-1];
     a[s-i-1]=temp;	
	}
	for (i=0;i<s;i++)
	{
	cout<<a[i];
}
	getch();
	return 0;
}
