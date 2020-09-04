#include <iostream>

using namespace std;

int faktor(int x ){
	
	
	if (x == 1){
		
		return x;
	}
	
	else {
		int num = 0;
		for (int j = 1; j <= x; j++){
			
			if (x % j == 0){
				
				num++;
				
			}
			
		}
		
		return num;
		
	}
	
	
}

int hasil (int y ){
	
	int num2 = 0;
	
	num2 = num2 + y;
	
	return num2;
	
	
	
}







int main (){
	
	int a, total;
	total = 0;
	cin >> a;
	
	
	for ( int i = 1; i <= a;i++ ){
	
	
int b =	faktor(i);


 int an = hasil(b);
 
 total = total + an;
	
}
	cout << total << endl;
	
}
