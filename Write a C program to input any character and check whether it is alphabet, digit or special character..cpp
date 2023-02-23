#include <iostream>
using namespace std;
int main(){	
		char ch;
		cout<<"Enter Charater"<<endl;
		cin>>ch;
		 if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
		{
			cout<<" Entered Character is Alphabet... ";
		}
		else if(ch>='0' && ch<='9'){
			cout<<"Entered Character Is Digit......";
		}
		else{
			cout<<"Entered Character Is Special Character....";
		}

	return 0;
}
