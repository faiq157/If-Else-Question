#include <iostream>
using namespace std;
int main(){	
		char ch;
		cout<<"Enter Character"<<endl;
		cin>>ch;
		if(ch=='a' || ch=='e' || ch=='i'|| ch=='o'||ch=='u' || ch=='A' || ch=='E' || ch=='I'|| ch=='O'||ch=='U' ){
			cout<<"Entered Chracrter is vowel..."<<endl;
		}
		else if(ch>='a' || ch<='z' && ch>='A' || ch<='Z')
		{
			cout<<" Entered Character is Consonant... ";
		}

	return 0;
}
