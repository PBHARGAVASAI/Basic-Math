#include<iostream>
using namespace std;
int main(){
	int n,num,rev=0,rem;
	cin>>n;
	num=n;
	while(n>0){
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(rev==num){
		cout<<"true";
	}
	else
	cout<<"false";
	
	
}
