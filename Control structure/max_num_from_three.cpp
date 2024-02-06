#include<iostream>

using namespace std;

int main (){
	
	int a,b,c,max;
	
	cout<<"Enter three numbers :";
	cin>>a>>b>>c;
	
	if(a>b && a>c){
		cout<<" Max= "<<a;
	}
	else if (b>a && b>c){
		cout<<" max= "<<b;
	}
	else if(c>a && c>b){
		cout<<" Max= "<<c;
	}
	else if(a==b && c>a){
		cout<<a<<"and"<<b<<"are max and equals."<<endl;
	}
	else if(b==c && a>b){
		cout<<b<<"and"<<c<<"are max and equals."<<endl;
	}
	else if(a==c && b>a){
		cout<<a<<"and"<<c<<"are max and equals."<<endl;
	}
	else{
		cout<<"All are equal.";
	}
	return 0;
}
