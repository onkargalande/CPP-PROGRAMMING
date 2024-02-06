/*
Accept bs from user And display its tax.

bs<150000                       No tax
bs>=150000 && bs<300000         5% tax on bs
bs>=300000                      7% tax on bs

*/

#include<iostream>

using namespace std;

int main(){
	
	float bs,tax,total;
	cout<<"Enter your base : ";
	cin>>bs;
	
	if(bs<150000){
		cout<<"You have no tax";
	}
	
	else if(bs>=150000 && bs<300000){
		tax=bs*0.05;
		total=bs-tax;
		cout<<"You have 5% tax :"<<total<<endl;
	}
	
	else if(bs>=300000){
		tax=bs*0.07;
		total=bs-tax;
		cout<<"You have 7% tax :"<<total<<endl;
	}
	
	return 0;
}


