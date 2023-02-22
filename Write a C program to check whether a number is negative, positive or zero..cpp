#include <iostream>
using namespace std;
int main(){
	int no1,no2,no3;
	cout<<"Enter Number:";
	cin>>no1;

	if(no1>0 ){
		cout<<"Number IS Positive"<<endl;		
	}
	else if (no1<0){
		cout<<"Number is Negative"<<endl;
	}
	
	else {
		cout<<"Number is Zero";
	}	
	return 0;
}
