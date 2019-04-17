#include <iostream>
using namespace std;

class Rectangle
{
	public :
		void input(double x,double y)
		{
			width =x;
			length =y;
		}
		double area()
		{
			return width*length;
		}
	private :
		double width;
		double length;
};
int main() {
	Rectangle Rect;
	Rect.input(20,40);
	cout<<"The Area of Rectangle is:"<<Rect.area();
	
}

