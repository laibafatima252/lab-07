#include<iostream>
using namespace std;
int main()
{
	
//	5 ! 5x4x3x2x1= 120
    int n ;
    long factorial = 1.0 ;
    cout<<"enter a number";
    cin>>n ;
    if (n <0)
    cout<<"error! enter a positive integer";
    else {
	
    	int i =1;
    	
    	do{
		
    	  factorial *= i;
    	  i++;
    	  
		  cout<<"factorial is"<<factorial;
		  
		  }
	
    	while(i<=n);
		}
	return 0;
}