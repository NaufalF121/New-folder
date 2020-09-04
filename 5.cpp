#include <iostream>
using namespace std;
int main() {
	
	char oper;
	int a, b;
	
	
	
	cin >> a >> oper >> b ;
	
	if (oper == '+')
	{
		
		cout << a + b << endl;
		
	}
else	if (oper == '-'){
		
		cout << a - b << endl;
		
		
	}
	else if (oper == '*' ){
		
		cout << a * b << endl;
		
		
	}
	else if(oper == '/') {
		
		cout << a/b << endl;
	
	}
	else if ( oper == '%'){
		
		cout << a%b << endl;
		
	}
	
}
