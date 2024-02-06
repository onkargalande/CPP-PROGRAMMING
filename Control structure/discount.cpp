/*
Problem :-    amt<10000                      no disc
              amt >=10000 && amt<20000       5% disc
              amt >=20000 && amt<50000       7% disc
              amt>=50000                     10% disc

*/

#include<iostream>

using namespace std;

int main(){
	
	float amt,disc,total;
	cout<<"Enter the amount :";
	cin>>amt;
	
	if(amt<10000){
		cout<<"No Discount.";
	}
	
	else if (amt>=10000 && amt<20000){
		disc=amt*0.05;
		total=amt-disc;
		cout<<"You have 5% discount :"<<total<<endl;
	}
	
	else if (amt>=20000 && amt<50000){
		disc=amt*0.07;
		total=amt-disc;
		cout<<"You have 7% discount :"<<total<<endl;
	}
	
	else if (amt>=50000){
		disc=amt*0.10;
		total=amt-disc;
		cout<<"You have 10% discount :"<<total<<endl;
	}
	
	return 0;
}
