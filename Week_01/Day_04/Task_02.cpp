//Create a simple calculator using switch for operations.
#include<iostream>
using namespace std;
int main(){
	float n1,n2;
	char choice;
	cout<<"Enter First Number : ";
	cin>>n1;
	cout<<"Enter Second Number : ";
	cin>>n2;
	cout<<"Enter Choice ( + , - , * , / ) : ";
	cin>>choice;
	switch(choice){
		case '+':
			cout<<n1<<" + "<<n2<<" = "<<n1+n2<<endl;
			break;
		case '-':
			cout<<n1<<" - "<<n2<<" = "<<n1-n2<<endl;
			break;
		case '*':
			cout<<n1<<" * "<<n2<<" = "<<n1*n2<<endl;
			break;
		case '/':
			if(n2 != 0){
				cout<<n1<<" / "<<n2<<" = "<<n1/n2<<endl;
			}else{
				cout<<"Undefined...You Can't Divide By Zero "<<endl;
			}
			break;
			
		default:
			cout<<"Choose Between ( + , - , * , / )"<<endl;
	}
	return 0;
}
