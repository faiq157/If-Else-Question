#include <iostream>
using namespace std;
int main(){
	int no1,no2,no3;
	cout<<"Enter Number 1 ";
	cin>>no1;
	cout<<"Enter Number 2 ";
	cin>>no2;
	cout<<"Enter Number 3 ";
	cin>>no3;
	if(no1>no2 && no1>no3){
		cout<<"Number 1 is greater than Number 2&3"<<'\n'<<no1<<endl;		
	}
	else if(no2>no1 && no2>no3){
		cout<<"Number 2 is Greater than NUmber 1&2"<<'\n'<<no2;
	}
	else {
		cout<<"Number 3 is greater than Number 1 & 2"<<'\n'<<no3;
	}	
	return 0;
}
