#include <iostream>
#include <math.h>
#
using namespace std;
int main ()
{
{

cout<<"\t\t\t\tCOMPUTATION OF GRADES";
}
{
int welcome;
{
//this is only for additional aesthetics
string student,welcome;
cout<<"\nPlease Input your ID number: ";
cin>>student;
cout<<"Welcome Student: "<<student<<endl;
cout<<"________________________________________________";
}
}
int grades;
{
cout<<"\nExamination­s (100 points each)";
cout<<"\nPlease INPUT your 1st, 2nd, 3rd, and final examinations scores";
double x1,ex1;
cout<<"\nFirst Exam: ";
cin>>x1;
ex1 = (x1/100)*85+15; //Base-15 grading system
cout<<"Your First Exam is: "<<ex1<<endl;


double x2,ex2;
cout<<"\nSecond Exam: ";
cin>>x2;
ex2 = (x2/100)*85+15;
cout<<"Your Second Exam is: "<<ex2<<endl;

double x3,ex3;
cout<<"\nFirst Exam: ";
cin>>x3;
ex3 = (x3/100)*85+15;
cout<<"Your First Exam is: "<<ex3<<endl;

double x4,ex4;
cout<<"\nFinal Exam: ";
cin>>x4;
ex4 = (x4/100)*85+15;
cout<<"Your Final Exam is: "<<ex4<<endl;

double overall = (ex1*.10 + ex2*.10 + ex3*.10 + ex4*.30);
cout<<"Your Overall Exam: "<<overall<<"%"<<endl;
cout<<"\n________________________________________________";
cout<<"\nPlease INPUT your:";
double l1,l2,l3,la1,la2,la3;
cout<<"\nLaboratory Exercise(50 pts each)";
cout<<"\nexercise # 1: ";
cin>>l1;
la1 = (l1/50)*85+15;
cout<<"Your Laboratory exercise 1: "<<la1<<endl;
cout<<"\nExercise # 2: ";
cin>>l2;
la2 = (l2/50)*85+15;
cout<<"Your Laboratory exercise 2: "<<la2<<endl;
cout<<"\nExercise # 3: ";
cin>>l3;
la3 = (l3/50)*85+15;
cout<<"Your Laboratory exercise 3: "<<la3<<endl;
double exercises = (la1*.10 + la2*.10 + la3*.10)/3;
cout<<"\nYour overall Exercises:"<<exercises<<"%"<<endl;
cout<<"\n________________________________________________";
cout<<"\nQuizzes (40 pts each)";
double q1,q2,q3,qz1,qz2,qz3,quiz;
cout<<"\nPlease INPUT your:";
cout<<"\nQuiz # 1: ";
cin>>q1;
qz1 = (q1/40)*85+15;
cout<<"Your Quiz 1: "<<qz1<<endl;
cout<<"\nPlease INPUT your:";
cout<<"\nQuiz # 1: ";
cin>>q2;
qz2 = (q2/40)*85+15;
cout<<"Your Quiz 2: "<<qz2<<endl;
cout<<"\nPlease INPUT your:";
cout<<"\nQuiz # 1: ";
cin>>q3;
qz3 = (q3/40)*85+15;
cout<<"Your Quiz 3: "<<qz3<<endl;
quiz = (qz1*.10 + qz2*.10 + qz3*.10)/3;
cout<<"Your Overall quizes: "<<quiz<<"%"<<endl;

double lab,labproj,lab15;
cout<<"\n________________________________________________";
cout<<"\nLaboratory projects (100pts)";
cout<<"\nInput your: ";
cout<<"Laboratory Projects: ";
cin>>lab;
labproj = (lab/100)*85+15;
lab15 = (labproj*.20);
cout<<"your total labproject is: "<<lab15<<"%"<<endl;
cout<<"\n________________________________________________";

double genave;
genave = overall + exercises + quiz + lab15;
cout<<"\nYour General Average is: "<<genave<<"%"<<endl;
cout<<"Remarks: ";


}
}
