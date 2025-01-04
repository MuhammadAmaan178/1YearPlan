//Write a program to find the largest among three numbers. 
#include<iostream>
using namespace std;
int main(){
	float n1,n2,n3,largest;
	cout<<"Enter 3 Numbers : ";
	cin>>n1>>n2>>n3;
	if(n1>n2 && n1>n3){
		cout<<n1<<" Is Largest"<<endl;
	}else if(n2>n1 && n2>n3){
		cout<<n2<<" Is Largest"<<endl;
	}else{
		cout<<n3<<" Is Largest"<<endl;
	}
	return 0;
}
