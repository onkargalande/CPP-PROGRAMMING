/* Accept balance amt amd withdrawl amt if withdrawl amt is greater than balance amt then display message otherwise display remaining balance after withdraw amt.*/


#include<iostream>

using namespace std;

int main (){
	
	float b,w,total;
	cout<<"Enter the balance amt and withdrawl amt :";
	cin>>b>>w;
	
	if(w>b){
		cout<<"Your balance is insufficient!";
	}
	
	else{
		total=b-w;
		cout<<"Current balance :"<<total;
	}
	
	return 0;
}
