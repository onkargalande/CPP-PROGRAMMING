/*first number is between second number and third number*/

#include<iostream>

using namespace std;

int main (){
	
	int a,b,c;
	cout<<"Enter three numbers : ";
	cin>>a>>b>>c;
	
	if(a>b && a<c){
		cout<<a<<" is in between "<<b<<"and "<<c<<endl;
	}
	
	else{
		cout<<a<<"is not between "<<b<<" and "<<c<<endl;
	}
	return 0;
}
