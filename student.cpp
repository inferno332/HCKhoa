#include <iostream>
#include <conio.h>
#include <math.h>
#include <vector>

using namespace std;
class Student 
{
    private:			
				string name;      		
				 long id;
				 double mathMark, englishMark, physicsMark, chemistryMark;
    public: 
   			Student()
   			{
   				name = "";
   				id = 0;
			}
        	void MathMark(double value)
         	{
                   if(value>0 && value<=100)
                   {
                             mathMark = value;
                   }
            }
 			void EnglishMark (double value)
            {
              	 if(value>0 && value<=100)
           			{
                   		englishMark = value;
                   	}
        	}
			void PhysicsMark (double value)
                   {
                    	if(value>0 && value<=100)
                     {
                      	physicsMark = value;
                     }
                   }
			void ChemistryMark (double value)
                {
                    if(value>0 && value<=100)
                   {
                   	 chemistryMark = value;
                   }
          		}
          	double getAverage()
          	{
               	return (mathMark+englishMark+physicsMark+chemistryMark)/4;
			}
         	void displayDetails()
          	{
                   cout<<"name="<<name;
                   cout<<"\nid="<<id;
                   cout<<"\naverage="<<getAverage()<<endl;
        	}
        	void createStudent()
				{
					cout <<"Enter name: ";
					cin >> name;
					cout <<"Enter ID: ";
					cin >>id;
				}
		
};
 
main()
{	
 double math;
 double physics;
 double english;
 double chemistry;
 int i;
 
 cout<<"How many student you want to store: ";
 cin>>i;
 Student stu[i];
 
 for (int n =0;n<i;n++)
	 {
 	cout <<"Enter student: "<<n+1<<endl;
		stu[n].createStudent();
				cout<<"Enter Math Mark: ";
					cin>> math;
					stu[n].MathMark(math);
				cout<<"Enter English Mark: ";
					cin>>english;
					stu[n].EnglishMark(english);
				cout<<"Enter Physics Mark: ";
					cin>>physics;
					stu[n].PhysicsMark(physics);
				cout<<"Enter Chemistry Mark: ";
					cin>>chemistry;
					stu[n].ChemistryMark(chemistry);
	stu[n].displayDetails();
	}
}



