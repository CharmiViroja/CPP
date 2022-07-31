#include<iostream>
using namespace std;
int main()
{
	ofstream myfile;
	myfile.open("charmi.txt",ios::out);
	myfile<<"writing this to a file\n";
	myfile.close();
	return 0;
}