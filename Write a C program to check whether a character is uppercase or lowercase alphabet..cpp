#include <iostream>
using namespace std;
int main(){	
		char ch;
		cout<<"Enter Character"<<endl;
		cin>>ch;
		 if(ch>='a' && ch<='z')
		{
			cout<<" Entered Character is LowerCase... ";
		}
		else if(ch>='A' && ch<='Z'){
			cout<<"Entered Character Is UpperCase.....";
		}
		else{
			cout<<"Entered Enter Correct Alphabet....";
		}

	return 0;
}
