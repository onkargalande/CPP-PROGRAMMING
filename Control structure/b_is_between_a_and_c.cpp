/*Second number is between first num and third num

a  b  c

*/

#include<iostream>

using namespace std;

int main(){
	
	int a,b,c;
	cout<<"Enter three numbers : ";
	cin>>a>>b>>c;
	
	if(b>a && b<c){
		cout<<b<<" is between "<<a<<" and "<<c<<endl;
	}
	
	else{
		cout<<b<<"is not between"<<a<< "and"<<c<<endl;
	}
	
	return 0;
}
