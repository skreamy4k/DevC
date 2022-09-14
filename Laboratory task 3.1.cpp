//laboratory task 3.1
#include <iostream>
#include <math.h>
using namespace std;

double x,y;
int main()
{
	cout<<"Enter value for x";
	cin>>x;
	y = pow(x,4)-(5*pow(x,3))+(3*pow(x,2))-(2*x);
	cout<<"\nThe value of y is: "<<y;
	return 0;
}
