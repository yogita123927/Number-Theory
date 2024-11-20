#include<bits/stdc++.h>
using namespace std;
long long pow(int a,int n){
	if(n==0)
	       return 1;
	else
	{
		long long p=pow(a,n/2);
		if(n%2==0)
		        return p*p;
		else
		        return p*p*a;        
	       }       
} 
int main(){
	int a,n;
	cin>>a>>n;
	long long x=pow(a,n);
	cout<<x;
}
