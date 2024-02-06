/*Third number is in between first number and second*/

#include<iostream>

using namespace std;

int main (){
	int a,b,c;
	cout<<"Enter three numbers :";
	cin>>a>>b>>c;
	
	if(c>a && c<b){
		cout<<c<<" is between "<<a<< "and "<<b<<endl;
	}
	
	else{
		cout<<c<<" is not between "<<a<< "and"<<b<<endl;
	}
	
	return 0;
}
