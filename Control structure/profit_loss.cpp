/*Accept cost price and selling price from user and display profit amt and loss amt or none. */

/*

i/p = cp,sp
o/p = profit ,loss

*/

#include<iostream>
using namespace std;
int main (){
	float cp,sp,amt;
	cout<<"Enter cost price and selling price : ";
	cin>>cp>>sp;
	
	if(cp>sp){
		amt=cp-sp;
		cout<<"Loss="<<amt;
	}
	
	else if(sp>cp){
		amt=sp-cp;
		cout<<"Profit="<<amt;
	}
	
	else{
		cout<<"No profit No loss.";
	}
	return 0;
}
