#include<iostream>

using namespace std;
int main()
{
	int i,j,n;
	cin>>n;
	while (n>=0)
	{
		for(j=1;j<=n;j++)
		{
			cout<<"*";
		}
		n=n-1;
		cout<<endl;
	}
	return 0;
}
