/* Display a charector is digit or not */

#include<iostream>

using namespace std;

int main(){
	
	char ch;
	cout<<"Enter 1 charector : ";
	cin>>ch;
	if(ch>='0' && ch<='9'){
		cout<<ch<<" is digit.";
	}
	
	else{
		cout<<ch<<" is not digit.";
	}
	return 0;
}
