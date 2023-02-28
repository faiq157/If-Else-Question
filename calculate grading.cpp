#include <iostream>
using namespace std;
int main()
{
    int phy, chem, bio, math, comp; 
    float per; 

  // Input marks of five subjects from user 
  
    cout<<"Enter five subjects marks: \n"<<endl;
	cout<<"Enter Physics Marks"<<endl;
	cin>>phy;
	cout<<"Enter Chemistry Marks"<<endl;
	cin>>chem;
	cout<<"Enter Biology Marks"<<endl;
	cin>>bio;
	cout<<"Enter Math Marks"<<endl;
	cin>>math;
	cout<<"Enter Computer Science Marks"<<endl;
	cin>>comp;

    //Calculate percentage 
    
    per = (phy + chem + bio + math + comp) / 5.0;

   cout<<"Percentage =  "<<per<<endl;


    // Find grade according to the percentage 
    
    if(per >= 90)
    {
        cout<<"Grade A";
    }
    else if(per >= 80)
    {
       cout<<"Grade B";
    }
    else if(per >= 70)
    {
       cout<<"Grade C";
    }
    else if(per >= 60)
    {
        cout<<"Grade D";
    }
    else if(per >= 40)
    {
        cout<<"Grade E";
    }
    else
    {
        cout<<"Grade F";
    }

    return 0;
}
