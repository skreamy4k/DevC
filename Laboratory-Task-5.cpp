//Laboratory exercise number 5
#include <iostream>
#include <string>
using namespace std;
int main()
{
	cout<<"\nLab. Num#5 By Chris Anthony Ypil\n";
	cout<<"\n\t\t\t\t\t\tMain List Option";
	char opt, prompt;
	float a, side, l, b, h, b1, b2, r, result;
	
	cout<<"\n[A] Perimeter";
	cout<<"\n[B] Area";
	cout<<"\n[C] Suraface Area";
	cout<<"\n[D] Exit";
	cout<< "\nEnter Option : ";
	cin>>opt;

	switch (opt){
		case 'A':
		cout<<"\n[1]Square";
		cout<<"\n[2]Rectangle";
		cout<<"\n[3]Return Main Menu";
		cout<<"\nSelect: ";
		cin>>opt;
		
		
		switch(opt){
					case'1':
					cout<<"\n\t\t\t\t\t\tSquare";
					cout<<"\nEnter side measurement of the square: ";
					cin>>side;
					result = 4*side;
					cout<<"\nThe perimeter of a square with a side measurement of "<<side<<" inches is "<<result<<" inches.\n";
					cout<<"\nDo you wish to return?: (Press K/k to return) ";
					cin>>prompt;
					switch(prompt){
						case 'K':
							return main();
							break;
							case 'k':
								return main();
								break;
					}
					break;
				case'2':
					cout<<"\n\t\t\t\t\t\tRectangle";
					cout<<"\nEnter side measurement of the rectangle: ";
					cout<<"\nInput the value of length: ";
					cin>>l;
					cout<<"\nInput the value of breadth: ";
					cin>>b;
					result = 2*(l+b);
					cout<<"\nThe perimeter of a rectangle with a length measurement of "<<l<<"inches and breadth of "<<b<<"inches is "<<result<<"inches ";
					cout<<"\nDo you wish to return?: (Press K/k to return) ";
					cin>>prompt;
					switch(prompt){
						case 'K':
							return main();
							break;
							case 'k':
								return main();
								break;
					}
					break;
					case '3':
						return main();
					return main();
					default :
						cout<<"PROMPT: Please select on the choices!\n";
						break;
					}
		
case 'B':
	cout<<"\n[1]Triangle";
		cout<<"\n[2]Trapezoid";
		cout<<"\n[3]Circle";
		cout<<"\n[4]Return Main menu";
		cout<<"\nSelect: ";
		cin>>opt;
		switch(opt)
	{
		case '1':
			cout<<"\n\t\t\t\t\t\tTriangle";
			cout<<"\nPlese enter the value of base: ";
			cin>>b;
			cout<<"\nPlese enter the value of height: ";
			cin>>h;
			result = (b*h)/2;
			cout<<"\nThe measurement of the Triangle is:"<<" "<<result<<endl;
			cout<<"\nDo you wish to return?: (Press K/k to return) ";
					cin>>prompt;
					switch(prompt){
						case 'K':
							return main();
							break;
							case 'k':
								return main();
								break;
					}
			return main();
			break;
			case '2':
			cout<<"\n\t\t\t\t\t\tTrapezoid";
			cout<<"\nPlese enter the value of base 1: ";
			cin>>b1;
			cout<<"\nPlese enter the value of base 2: ";
			cin>>b2;
			cout<<"\nPlese enter the value of height: ";
			cin>>h;
			result = 0.5*(b1+b2)*h;
			cout<<"\nThe measurement of the trapezoid is:"<<" "<<result<<endl;
			cout<<"\nDo you wish to return?: (Press K/k to return) ";
					cin>>prompt;
					switch(prompt){
						case 'K':
							return main();
							break;
							case 'k':
								return main();
								break;
					}
			return main();
			case '3':
					cout<<"\n\t\t\t\t\t\tCircle";
					cout<<"\nPlese enter the value of Radius: ";
					cin>>r;
					result = (3.14)*(r)*(r);
					cout<<"\nThe measurement of the Circle is:"<<" "<<result<<endl;
					cout<<"\nDo you wish to return?: (Press K/k to return) ";
					cin>>prompt;
					switch(prompt){
						case 'K':
							return main();
							break;
							case 'k':
								return main();
								break;
					}
					return main();
			case '4':
				return main();
				break;
				default :
						cout<<"PROMPT: Please select on the choices!\n";
						return main();
						break;
				
	}
case 'C':
	cout<<"\n[1]Cube";
		cout<<"\n[2]Cylinder";
		cout<<"\n[3]Sphere";
		cout<<"\n[4]Return Main menu";
		cout<<"\nSelect: ";
		cin>>opt;
		switch(opt){
			case '1':
			cout<<"\n\t\t\t\t\t\tCube";
			cout<<"\nPlese enter the value of area: ";
			cin>>a;
			result = 6*(a)*(a);
			cout<<"\nThe measurement of the cube is:"<<" "<<result<<endl;
			cout<<"\nDo you wish to return?: (Press K/k to return) ";
					cin>>prompt;
					switch(prompt){
						case 'K':
							return main();
							break;
							case 'k':
								return main();
								break;
					}
			return main();
			break;
			case '2':
			cout<<"\n\t\t\t\t\t\tCylinder";
			cout<<"\nPlese enter the value of radius: ";
			cin>>r;
			cout<<"\nPlese enter the value of height: ";
			cin>>h;
			result = 2*3.14*(r)*(r)+2*3.14*r*h;
			cout<<"\nThe measurement of the Cylinder is:"<<" "<<result<<endl;
			cout<<"\nDo you wish to return?: (Press K/k to return) ";
					cin>>prompt;
					switch(prompt){
						case 'K':
							return main();
							break;
							case 'k':
								return main();
								break;
					}
			return main();
			case '3':
					cout<<"\n\t\t\t\t\t\tSphere";
					cout<<"\nPlese enter the value of Radius: ";
					cin>>r;
					result = 4*(3.14)*(r)*(r);
					cout<<"\nThe measurement of the Sphere is:"<<" "<<result<<endl;
					cout<<"\nDo you wish to return?: (Press K/k to return) ";
					cin>>prompt;
					switch(prompt){
						case 'K':
							return main();
							break;
							case 'k':
								return main();
								break;
					}
					return main();
			case '4':
				return main();
				default :
						cout<<"PROMPT: Please select on the choices!\n";
		}
case 'D':
	cout<<"Goodbye :)";
	return 0;
}

}
