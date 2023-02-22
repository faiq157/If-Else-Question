#include <iostream>
using namespace std;
int main(){
	
int number;
cout<<"Enter Number"<<endl;
cin>>number;
if(number%5==0 && number%11==0){
	cout<<"Number is Divisable by 5 and 11"<<endl;
}
else
{
	cout<<"Number is Not divisable by 5 and 11";
}

	return 0;
}
