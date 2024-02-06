#include<iostream>

using namespace std;

void max();
void pos_neg();


void main(){
	
	max();
	pos_neg();
	
	return 0;
}

void max(){
	int a, b;
	cout<<"Enter two nums : "<<endl;
	cin>>a>>b;
	
	if(a>b){
		cout<<a<<" is max."<<endl;
	}
	
	else if(b>a){
		cout<<b<<" is max."<<endl;
	}
	
}

void pos_neg(){
	
	int a;
	cout<<"Enter ur no: "<<endl;
	cin>>a;
	
	if(a>0){
		cout<<a<<" is positive."<<endl;
	}
	
	else if(a<0){
		cout<<a<<" is negative."<<endl;
	}
}

