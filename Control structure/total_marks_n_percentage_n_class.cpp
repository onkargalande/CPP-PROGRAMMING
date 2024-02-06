/* Accept three subject marks from user and dispay its total, percentage and class. */

#include<iostream>

using namespace std;

int main(){
	
	int m1,m2,m3,total;
	float per;
	
	cout<<"Enter marks of m1,m2,m3";
	cin>>m1>>m2>>m3;
	
	total=m1+m2+m3;
	per=total/3;
	cout<<"Percentage of your three subjects are : "<<per<<endl;
	
	if(per>=71){
		cout<<"Congratulations! You get Distinction.";
	}
	
	else if(per>=61 && per<=70){
		cout<<"You get First class.";
	}
	
	else if(per>=51 && per<=60){
		cout<<"You get Second class.";
	}
	
	else if(per>=41 && per<=50){
		cout<<"You Pass.";
	}
	
	else{
		cout<<"YOU ARE FAIL.";
	}
	
	return 0;
}
