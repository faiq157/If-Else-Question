#include <iostream>
using namespace std;
int main(){	
		int Year;
		cout<<"Enter Number"<<endl;
		cin>>Year;
		if(Year%4==0 && Year%100!=0 || Year%400==0 ){
			cout<<"Year is leap Year"<<endl;
		}
		else
		{
			cout<<"Year is Not Leap Year";
		}

	return 0;
}
