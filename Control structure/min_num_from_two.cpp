/*Accept two numbers from user and check whether which is the minimum number.*/

#include<iostream>

using namespace std;

int main (){
	
	int a,b;
	cout<<"Enter two numbers :";
	cin>>a>>b;
	
	if(a<b){
		cout<<a<<" is minimum"<<endl;
	}
	
	else if(b<a){
		cout<<b<<" is minimum"<<endl;
	}
	else{
		cout<<" Both are equal."<<endl;
	}
	
	return 0;
}
