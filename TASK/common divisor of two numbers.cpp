#include<iostream>
using namespace std;
int main()
{
	int n1 ,n2;
	cout<<"enter first numbers:";
	cin>>n1;
	cout<<"enter second numbers:";
	cin>>n2;
	while(n1!=n2)
	{
		if(n1>n2)
		  n1-=n2;
	    else
	    n2-=n1;
	}
	cout<<"="<<n1;
	return 0;
	
}