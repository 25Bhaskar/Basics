#include<iostream>

using namespace std;
int main()
{
	int n,i,j=0;
	cin>>n;
	while (n>0)
	{
		i=n%10;
		j=j*10+i;
		n=n/10;
	}
	cout<<j;
return 0;
}

