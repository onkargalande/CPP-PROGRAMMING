#include<iostream>

using namespace std;

void add();
void fact();                                 // declatration


void main(){
	add();
	add();                                   //calling
	fact();
	
	return 0;
}

void add(){
	int a, b, c;
	cout<<"Enter two num: "<<endl;
	cin>>a>>b;
	c=a+b;                                                     //defination
	cout<<"Sum : "<<c<<endl; 
}

void fact(){
	int a,f1=1,i;
	
	cout<<"Enter your num : "<<endl;
	cin>>a;
	
	for(i=a;i>1;i--){
		f1=f1*i;
		cout<<"fact= "<<f1<<endl;
	}
}
