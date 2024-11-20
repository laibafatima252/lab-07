#include<iostream>
using namespace std;


	void sum(int num)
	{
		num=num+10;
		cout<<"inside function(sum)"<<num<<endl;
	}
	
int main()
{
	int num=5;
	cout<<"before function"<<endl;
	sum(num);
	
	return 0;
}