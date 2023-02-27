# include <iostream>
using namespace std;
int main(){
		int side1,side2,side3;
		cout<<"Enter Sides of Triangle"<<endl;
		cin>>side1,side2,side3;
		if(side1==side2 && side2==side3){
			cout<<"Triangle is Equilteral";
		}
		else if(side1==side2 || side1==side3 || side2==side3){
			cout<<"Triangle is isosceles ";
		}
		else{
			cout<<"Triangle is Scalene";
		}
		
	
	
}
