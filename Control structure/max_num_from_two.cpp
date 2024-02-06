/*Accept the two numbers and maximum number from them.*/

#include<iostream>

using namespace std;

int main (){
	int a,b;
	cout<<"Enter two numbers : ";
	cin>>a>>b;
	
	if(a>b){
		cout<<a<< " is maximum"<<endl;
	}
	
	else if(b>a){
		cout<<b<< " is maximum."<<endl;
	}
	else{
		cout<<"Both are equal.";
	}
	
	return 0;
}
