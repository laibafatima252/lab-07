#include<iostream>
using namespace std;
void multiply(int num)
{
	num=num*10;
	cout<<"inside function(pass by value)"<<num<<endl;
	
}
void sum(int num)
{
	num=num+10;
	cout<<"inside function(sum)"<<num<<endl;
	
}
int main()
{
	int num =5;
	cout<<"before function call:"<<num<<endl;
	multiply(num);
	sum(num);
	return 0;
}