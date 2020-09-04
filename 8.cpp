#include <iostream>

using namespace std;


int main (){
	
	int a, b, c;
	
	
	cin >> a >> b >> c;
	
	
	
	
	if ( a > b && a > c && a < b +c){
		
		
		cout << "segitiga" << endl;
		
	}
	else if (b > a && b > c && b < a +c){
		
		cout << "segitiga" << endl;
		
	}
	else if (c > a && c >b && c < a +b){
		
		cout << "segitiga" << endl;
		
	}
	else {
		
		cout << "bukan segitiga" << endl;
		
	}
	
	
}

