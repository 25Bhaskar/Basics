#include <iostream>
using namespace std;
int fact(int x) 
{if(x > 1)
         return (x*fact(x-1));
    else
        return 1;
   
}
int main() 
{
   int x,a;
   cin>>x;
   a=fact(x);
   cout<<a;
   return 0;
}

