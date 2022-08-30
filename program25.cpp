//"program for fibonacci series"
#include<iostream>
using namespace std;
int main()
{int a,b,c,n,i;
a=-1;
b=1;
cout<<"enter the number of terms";
cin>>n;
cout<<"the series is";
for(i=0;i<n;i++)
{
	c=a+b;
	a=b;
    b=c;
	cout<<c;	
}

return 0;
	
	
}
