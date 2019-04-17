#include <iostream>
#include <conio.h>
#include <math.h>
#define		PI 		M_PI 
using namespace std;

class circle
{
	private:
		double radius;
	public:
		circle(double x)
		{
			radius = x;
		}
	double perimeter()
	{
		return 2*PI*radius;
	}
	double area(){
		return PI*pow(radius,2);
	}
		
};
main()
{
		circle cir1(10), cir2(18);
		cout<<"Area of cir1 is:"<<cir1.area();
		cout<<"Perimeter of cir1 is:"<<cir2.perimeter();
		cout<<"Area of cir2 is:"<<cir2.area();
		cout<<"Perimeter of cir2 is:"<<cir2.perimeter();
		return 0;
	}
