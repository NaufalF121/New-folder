#include <iostream>
#include <string>
#include <bits/stdc++.h> 
using namespace std;

int selisih(int a,int b){
	int c = b-a;
	cout << c <<endl;
	return c;
	
	
}


int main(){
int n,num;
cin >> n;
int arr[n]; 


for(int j = 0; j < n; j++){
		
		cin >> arr[j];
		
	}
	if (n == 1){
		
		cout << arr[0] << endl;
		
	}
	else {
	
	
	int j = n-1;
	int i = j-1;
	
	for (int p = n-1; 0 < p; p-- ){
		
		arr[i] = selisih(arr[j],arr[i]);
		int arr[n-1];
		
		
		
		
		if (i > 0){
		j = i-1;
		i = j-1;
			
			
		}
		if (n == 0){
			
			break;
		}
		
	}
	
	cout << arr[0] << endl;
}


	
	
	
	
}
