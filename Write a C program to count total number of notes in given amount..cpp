#include <iostream>
using namespace std;

int main()
{
   int amount;
   //decealer and also initialize at a same time dont wory about this.
   int note500,note200,note100,note50,note20,note10,note5,note2,note1=0;
   cout<<"Enter Amount"<<endl;
   cin>>amount;
   if(amount>=500){
   	note500=amount/500;
   	amount-=note500*500;
   }
	else if(amount>=200){
		note200=amount/200;
		amount-=note200*200;
	}
	else if(amount>=100){
		note100=amount/100;
		amount-=note100*100;
	}
	else if(amount>=50){
		note50=amount/50;
		amount-=note50*50;
	}
	else if(amount>=20){
		note20=amount/20;
		amount-=note20*20;
	}
	else if(amount>=10){
		note10=amount/10;
		amount-=note10*10;
	}
	else if(amount>=5){
		note5=amount/5;
		amount-=note5*5;
	}
	else if(amount>=2){
		note2=amount/2;
		amount-=note2*2;
	}
	else if(amount>=1){
		note1=amount;		
	}
	
	cout<<"Total number of notes = \n"<<endl;
	cout<<"500 = "<<note500<<endl;
	cout<<"200 = "<<note200<<endl;
	cout<<"100 = "<<note100<<endl;
	cout<<"50 = "<<note50<<endl;
	cout<<"20 = "<<note20<<endl;
	cout<<"10 = "<<note10<<endl;
	cout<<"5 = "<<note5<<endl;
	cout<<"2 = "<<note2<<endl;
	cout<<"1 = "<<note1<<endl;
		
    return 0;
}
