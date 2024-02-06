/*Accept a number and check even or odd*/
#include<iostream>

using namespace std;

int main(){
	
	int a;
	cout<<"Enter a number : ";
	cin>>a;
	
	if(a%2==0){
		cout<<"The given number is even."<<endl;
	}
	
	else{
		cout<<"It is odd.";
	}
	
	return 0;
}
