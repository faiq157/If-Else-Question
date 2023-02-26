#include <iostream>
using namespace std;
int main(){	
		char weak;
		cout<<"Enter Weak Number"<<endl;
		cin>>weak;
		 if(weak=='1' )
		{
			cout<<"Monday";
		}
	else if(weak=='2' )
		{
			cout<<"Tuesday";
		}
	else if(weak=='3' )
		{
			cout<<"Wednesday";
		}
	else if(weak=='4' )
		{
			cout<<"Thursday";
		}
	else if(weak=='5' )
		{
			cout<<"Friday";
		}
	else if(weak=='6' )
		{
			cout<<"Sataurday";
		}
	else	if(weak=='7' )
		{
			cout<<"Sunday";
		}
		else{
			cout<<"Please Enter Correct Weak Number";
		}
	

	return 0;
}
