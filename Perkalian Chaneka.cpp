#include <iostream>
using namespace std;

int main(){
	
	unsigned long long a,b;
	
	cin >> a >> b;
	if (a% 11 == 0){
		
		a = a/11;
		
		cout << (a*b) << "\n";
	}
	else {
		
		b = b/11;
		cout << (a*b) << "\n";
	}
	
}
