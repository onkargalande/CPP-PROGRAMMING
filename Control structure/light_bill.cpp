/*Light bill program. */

#include<iostream>
 
using namespace std;

int main(){
	
	int unit;
	float UC,ElectricityCharge,EC,total;
	
	cout<<"Enter units :";
	cin>>unit;
	
	if(unit<=100){
		ElectricityCharge = unit*3.44;
		cout<<"Electricity Charge : "<<ElectricityCharge;
	}
	
	else if(unit>=101 && unit<=300){
		ElectricityCharge = unit*7.34;
		cout<<"Electricity Charge : "<<ElectricityCharge;
	}
	
	else if(unit>=301 && unit<=500){
		ElectricityCharge = unit*10.36;
		cout<<"Electricity Charge : "<<ElectricityCharge;
	}
	
	else if(unit>=501 && unit<=1000){
		ElectricityCharge = unit*11.82;
		cout<<"Electricity Charge : "<<ElectricityCharge;
	}
	
	else{
		ElectricityCharge = unit*11.92;
		cout<<"Electricity Charge :"<<ElectricityCharge;
	}
	
	UC=unit*1.38;
	EC=(102+ElectricityCharge+UC)*0.16;
	total=102+ElectricityCharge+UC+EC;
	cout<<"Unit Charge :"<<UC<<endl;
	cout<<"Tax : "<<EC<<endl;
	cout<<"Total Bill : "<<total<<endl;
	
	return 0;
} 
 
