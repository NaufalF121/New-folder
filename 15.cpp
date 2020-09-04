#include <iostream>
#include <algorithm>
#include <bits/stdc++.h> 
using namespace std;


int main (){
	
	int n,k;
	cin >> n;
	cin >> k;
	int num  =0;
	int num2 = 0;
	int arr2 [k];
	 
	
	for(int j = 0; j < k; j++){
		
		cin >> arr2[j];
		
	}
	int na = sizeof(arr2)/sizeof(arr2[0]); 
sort(arr2, arr2 + na );


		for (int p = 0; p < n; p++){
	
		if (arr2[num] == p +1){
			num++;
		
			
		}
		else{
			num2++;
			cout << p + 1;
			if (n-k > num2 ){
				cout << " ";
				
			}
		}
	}
	
	
	
	
	
//	for (int i = 0; i < n; i++){
//		for (int j = 0; j < k; j++){
//			
//			
//			
//			
//			
//			if (i+1 == arr2[j] ){
//			
//	
//
//			}
//			else {	
//				
//			cout << i +1 ;
//			
//			if (n-k-1 >= i){
//			
//			cout << " ";
//			
//		}	
//			
//		
//		}
//		
//		}  
//	
//		
//		
//		
//		
//	}
//	

	
	
	
	
	cout << "\n";
	
	
	
}
