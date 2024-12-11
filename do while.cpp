#include <iostream>
using namespace std;

int main(){
	int balance=1000;
	int number;
	do{
		cout<<"Enter your amount: ";
		cin>>number;
		balance=balance-number;
	}
	while(balance>=100);
	
	return 0;
}
