#include <iostream>

using namespace std;

int main (){
	
	int a, b ,c;
	cin >> a >> b >>c;
for (int i = 0; i < a; i++){
	for (int j = 0; j < b; j++){
		if (i < c || j < c || i >=a -c){
			
			cout << "*";
			
		}
		else {
			
			cout << ".";
			
		}
	
		
	}
	cout << "\n";	
	
}	
	
	
}
