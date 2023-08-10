//code to display the roots and their nature of a quadratic equation
#include<iostream>
#include<cmath>
using namespace std;

class QuadEqn
{
	public:
		float num1,num2,num3;
		float rootQuad (float a,float b, float c);//function prototype
};

int main()
{
	QuadEqn myRoots;
	cout<<"Enter the three values to determine the discriminant";
	cin>>myRoots.num1>>myRoots.num2>>myRoots.num3;
	cout<<myRoots.rootQuad(myRoots.num1,myRoots.num2,myRoots.num3);
}
	
float QuadEqn :: rootQuad (float a,float b, float c)
{
	float d= (b*b)-(4*a*c);
	float root1;
	float root2;
	if (d<0)
	{
		cout<<"This quadratic equation has two complex roots"<<endl;
	}
	else if (d==0)
	{
		cout<<"This quadratic equation has two equal roots"<<endl;
		root1=-b/(2*a);
		root1=root2;
		cout<<"The roots of this equation are: "<<root1<<"and"<<root2;
	}
	else if(d>0)
	{
		cout<<"This quadratic equation has two real roots"<<endl;
		root1= (-b + sqrt(d))/(2*a);
		root2= (-b - sqrt(d))/(2*a);
		cout<<"The roots of this equation are: "<<root1<<"and"<<root2;
	}
}