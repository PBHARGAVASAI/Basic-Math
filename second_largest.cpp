#include<iostream>
using namespace std;
int main(){
	int n,largest=0,slarge=0;
	cout<<"Enter the number ";
	cin>>n;
	cout<<"Array numbers ";
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		
	}
	for(int i=0;i<n;i++){
		if(a[i]>largest){
			largest=a[i];
		}
	}
	for(int i=0;i<n;i++){
		if(a[i]>slarge&&a[i]<largest){
			slarge=a[i];
		}
	}
	cout<<"The second largest number : "<<slarge;
	
}
