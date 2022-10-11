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

	
	// function-type initilaztion
	{
		// it will not give error	
		int rage(20.99);
		cout<<rage<<endl;
	}

	
	
	{
		// initilaztion string and char 
		char ch{'a'};
		cout<<endl<<ch;
		char str=65;
		cout<<endl<<str;        // it will print A
		string st{"hello"};
		cout<<endl<<st;
	}
	
	
	
	{
		// floating value  by default it is double
		
		float f = 234.324f;               // size is  4 byte
		double df = 2343256.345;          // size is 8 byte
		long double ld{31446543.324L};    // size is 12 byte in my PC  but  in most time it is 16 byte
		
		cout<<endl<<f;
		cout<<endl<<df;
		cout<<endl<<ld;
		
		
		//NAN  and infinity & -infinity 
		
		double a{23.23};
		double na{-23.23};
		double b{},c{};    // b will be initialised with 0
		cout<<a/b<<endl;
		cout<<na/b<<endl;
		cout<<c/b<<endl;
	}
	
	
	int a=33.44;
	cout<<a;


}
