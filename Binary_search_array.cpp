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
	int b=0,s=n;
	int mid=(b+s)/2;
	while (s>b)
	{
		if (arr[mid]==search)
		{
			cout<<mid;
			break;
		}
		else if (search > arr[mid])
		{
			b=mid+1;
			mid=(b+s)/2;
		}
		else 
		{
			s=mid-1;
			mid=(b+s)/2;
		}
	}

	getch();
	return 0;
}
