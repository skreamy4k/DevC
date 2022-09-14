//this program prints "you pass" if a student's average is 60
//And prints "A+" if student's average is greater than 95
#include <iostream>
using namespace std;

int main()
{
	float average;
	cout<<"input you average"<<endl;
	cin>>average;
	if(average >= 60)
	cout<<"you pass"<<endl;
	if(average > 95)
	cout<<"A+"<<endl;
	return 0;
}
