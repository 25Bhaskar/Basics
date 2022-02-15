#include<iostream>
using namespace std;
class first
{
	int a,b;
	public:
		void setdata(int x , int y)
		{
			a=x;b=y;
		}
		friend void add(first);
		void show()
		{
			cout<<endl<<"sum : "<<a+b;
		}
};
void add (first x)
{
	cout<<x.a<<'\t'<<x.b;
}

int main()
{
	
	first c1;
	c1.setdata(2,3);
	add(c1);
	c1.show();
	return 0;

}
