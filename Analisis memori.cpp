#include <iostream>
#include <cmath>
#include<math.h>
using namespace std;

int memori(int n){

    

	if(n == 1){
		
		return n;
		
	}
	
	else{
	
			return   1 + memori((n / 2) + ((n % 2) != 0)) + memori(floor(n/2));
	
         }
}



int main (){
	
	int n; 
	cin >> n;
	
	
		
		cout <<   memori(n)<< endl;;
		
	
	
}				
