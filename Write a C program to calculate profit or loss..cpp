# include <iostream>
using namespace std;
int main(){
	int cp,sp,amnt;
	cout<<"Enter Selling Price : "<<endl;
	cin>>sp;
	cout<<"Enter Cost Price : "<<endl;
	cin>>cp;
	if(sp>cp){
		amnt=sp-cp;
		cout<<"Profite is : "<<amnt;
	}
	else if(cp>sp){
		amnt=cp-sp;
		cout<<"Loss Is : "<<amnt;
	}
	else{
		cout<<"No profit or Loss";
	}
	
}
