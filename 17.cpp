#include <stdio.h>

using namespace std;

int main (){
	
	int n;
	int num =0;
	int num9 = 0;
scanf (" %d", &n);


int arr[n];


for (int p = 0; p < n; p++){
	
	scanf("%d", &arr[p]);
}


for (int i = 0; i < n; i++){
	
	if (i % 2 == 0){
		
		printf("%d", arr[i-num]);
	
	num++;
		
	}
	else {
		
	printf("%d", arr[n-num9-1]);
		
		num9++;
	}
	
	if (i != n-1){
		
		printf(" ");
	}	
}
printf("\n");
}
