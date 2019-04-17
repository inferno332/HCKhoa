#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
class Cube
{
private: double size=10;
public :
		 Cube(double val)
         {
                  if(val>0)
                  {
                           size = val;
                  }
         }
         void setSize(double val)
         {
                  if(val>0)
                  {
                           size = val;
                  }
         }
         double getSize()
         {
                  return size;
         }

		double volume()
		{
			return pow(size ,3);
		}
         void details()
         {
         	cout<<"\ndetails of cube";
                  cout<<"\nsize="<<getSize();
                  cout<<"\nvolume="<<volume()<<"\n\n";

		 }

};
main()
{
	Cube cube1(4),cube2(3),cube3(-2);
	cube1.details();
	cube2.details();
	cube3.details();
	getch();
}		
