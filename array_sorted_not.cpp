#include<iostream>
using namespace std;
int main(){
	int n,temp;
	cout<<"Enter the number ";
	cin>>n;
	cout<<"Array Numbers ";
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++){
		if(a[i]<a[i+1]){
			continue;
		}
		else{
			if(a[i] == a[i+1]){
				continue;
			}
			else{
				cout<<"not sorted";
				return 0;
			}
		}
	}
		cout<<"sorted";
		return 0;
}
