# include <iostream>
using namespace std;
int main(){
	int angle1,angle2,angle3;
	int sum;
	cout<<"Enter 3 angle"<<endl;
	cin>>angle1;
	cin>>angle2;
	cin>>angle3;
	sum=angle1+angle2+angle3;
	if(sum==180 && angle1>0 && angle2>0 && angle3>0 ){
		cout<<"Triangle is valid";
	}
	else{
		cout<<"Triangle is Invalid";
	}
	
}
