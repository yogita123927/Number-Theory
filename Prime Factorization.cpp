#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter n:";
	cin>>n;
	while(n!=1){
	for(int i=2;i<n/2;i++){
	if(n%i==0){ cout<<i<<endl;
	n=n/i;
	break;
	}
}
}

}

