#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

void permutasi(int arr[],int n,int m,int bat){
	
	
	if (n+1 == bat){
		
		for(int j = 0; j < bat; j++){
		
	cout << arr[j];
	
	if (j!=n-1){
		
		cout << " ";
		
	    }
	}
	cout << "\n";
	}else{
		
		for (int i = n; i <= bat; i++)  
        {  
  
            // Swapping done  
            swap(arr[n], arr[i]);  
  
            // Recursion called  
            permutasi(arr, n+1, m,bat);  
  
            //backtrack  
            swap(arr[n], arr[i]);  
        }  
		
	}
			
		
		
	}
	




int main(){
	
	int n,m;
	
	cin >> n >> m;
	
	int arr[n];
		for(int j = 0; j < n; j++){
		
	 arr[j] = j+1;
		cout << arr[j];
	}
		
		

			permutasi(arr,0,m,n);
	
	
		
		
		
	
	
	
	
	
}
