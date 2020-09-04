#include <iostream>


using namespace std;

int swap(int a){
	
return  a;
	
	
}
int swap2 ( int b){
	
	return b;
	
}


int main(){
	
	int n, num, num1;
cin >> n;


int arr[n];


for (int p = 0; p < n; p++){
	
	cin >> arr[p];
	
  }
  
  for(int i = 0; i< n; i++){
  	
  	for (int j = i+1; j < n; j++){
  		
  		if (arr[i] > arr[j] ){
  			
  		num =	swap(arr[i]);
  		
  		num1 = swap2(arr[j]);
  		
  			arr[j] = num;
  			
  			arr[i] = num1;
  			//cout << arr[i] << " " << arr [j] << endl; 
  			
  			cout << i+1 << " " << j+1 << endl;
  			
		  }
  		
	  }
  	
  }

	
}

