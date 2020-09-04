#include <iostream>

int main(){
	int n;
	scanf("%d", &n);
	int M;
	scanf("%d", &M);
	
	int N[n];
	int Max[n-M];
	
	for(int i = 0; i < n; i++ ){
		scanf("%d", & N[i]);	
	}
	
	
	
	
		
for(int i = 0; i< n-M; i++  ){
	for(int j = 0; j < M; j++){
Max[i] 	 = Max[i] +	N[j+i];
 	
	}
	

	
}

int count = Max[0]; 
	for(int i = 1 ; i < n-M; i++){
		if (count < Max [i]){
			count = Max[i];
			
		}
	}
	
		printf("%d", Max[0]);


		

		

	

	
}
