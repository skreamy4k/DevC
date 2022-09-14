#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double First,Second,Third,Final,Examination;
	cout<<"Major Examinations(100pts each)";
	cout<<"\nFirst: ";
	cin>>First;
	cout<<"Second: ";
	cin>>Second;
	cout<<"Third: ";
	cin>>Third;
	cout<<"Final: ";
	cin>>Final;
	Examination = (First+Second+Third+Final)/4;
	double q1,q2,q3,Quiz;
	cout<<"Your total Major examination is: "<<Examination<<endl;
	cout<<"\nLaboratory Exercises(50pts each)";
	cout<<"\nQz # 1: ";
	cin>>q1;
	cout<<"Qz # 2: ";
	cin>>q2;
	cout<<"Qz # 3: ";
	cin>>q3;
	Quiz = (q1+q2+q3)/3;
	cout<<"Your total quiz is: "<<Quiz<<endl;
	double ex1,ex2,ex3,ex4,exer;
	cout<<"\nLaboratory exercises(50 points each)";
	cout<<"\nExer # 1: ";
	cin>>ex1;
	cout<<"Exer # 2: ";
	cin>>ex2;
	cout<<"Exer # 3: ";
	cin>>ex3;
	exer = (ex1+ex2+ex3)/3;
	cout<<"Your total exercise is: "<<exer<<endl;
	double labtotal;
	cout<<"\nLaboratory Project(100 points)";
	cin>>labtotal;
	labtotal = labtotal;
	cout<<"Your laboratory project total: "<<labtotal<<endl;
	double generalave;
	generalave = (Examination+Quiz+exer+labtotal)/4;
	cout<<"Your General Average is: "<<generalave<<endl;

}
