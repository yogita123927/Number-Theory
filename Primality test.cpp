#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"enter x:";
	cin>>x;
	for(int i=2;i<x;i++){
	if(x%i==0){ cout<<"it is Not a Prime number";
	break;
	}
	}
	cout<<"it is a prime number";
}

