/*Display a charector is alphabate or not.*/

#include<iostream>

using namespace std;

void main(){
	
	char ch;
	cout<<"Enter 1 charector :";
	cin>>ch;
	
	if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
		cout<<ch<<" is alphabate";
	}
	else{
		cout<<ch<<" is not alphabate";
	}
}
