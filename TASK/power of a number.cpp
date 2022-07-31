#include<iostream>
using namespace std;
int main()
{
	int base,exp,result=1,i;
	cout<<"enter base\n";
	cin>>base;
	cout<<"enter exponent\n";
	cin>>exp;
	for(i=0;i<exp;i++)
	{
		result=result*base;
	}
	cout<<base<<"^"<<exp<<"="<<result;
	return 0;
}
	