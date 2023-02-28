# include <iostream>
# include <math.h>
using namespace std;
int main(){
	int a, b,c;
	int descriminant;
	float root1,root2,Imaginary;
	cout<<"Enter values of a, b, c of quadratic equation (aX^2 + bX + c): "<<endl;
	cout<<"Enter value of a"<<endl;
	cin>>a;
	cout<<"Enter value of b"<<endl;
	cin>>b;
	cout<<"Enter value of c"<<endl;
	cin>>c;
	// Find discriminant of the equation 
	descriminant=(b*b)-(4*a*c);
	if(descriminant > 0){
		root1= (-b+sqrt(descriminant)) / (2*a);
		root2= (-b-sqrt(descriminant)) / (2*a);
		cout<<"The Root is Real"<<root1<<endl<<root2;
	}
	else if(descriminant == 0)
    {
        root1 = root2 = -b / (2 * a);
        cout<<"Two Equal Real Root Exist :"<<root1<<endl<<root2;
    }
    else if(descriminant < 0)
    {
        root1 = root2 = -b / (2 * a);
        Imaginary = sqrt(-descriminant) / (2 * a);
        cout<<"Two distinct complex root: "<<root1,Imaginary,root2,Imaginary;
	
}
	
}
