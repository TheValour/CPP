#include <iostream>
using namespace std;

int main(){

	// brace initilaztion
	{
		// it give error of narrowing conversion 

		int i{};     // initialized built-in type, equals to int i{0};
		int j{10}; // initialized built-in type
		
		int age{29.99};
		cout<<age<<endl;
	}

	
	// function initilaztion
	{
	// it will not give error	
	int rage(20.99);
	cout<<rage<<endl;
	}

	// initilaztion string and char 
	char ch{'a'};
	string st{"hello"};
	cout<<endl<<st;
	cout<<endl<<ch;
	
	
	int a=33.44;
	cout<<a;


}
