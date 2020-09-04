#include <iostream>
#include <string>
#include <bits/stdc++.h> 
using namespace std;

void keluar (bool psikopat,int num){
	
	if (psikopat){
		if (num == 0){
			
			cout << "0" << " " <<"0"<< endl;
			
		}
		else{
			cout << num << " " << num << endl;
			
		}
		
		
		
	}
	else {
		cout << num-1 << " " << num<< endl;
	}
	
	
}


int main(){
	
	int n,m;
	bool wibu = true;

	cin >> n >> m;
	
	int arr[m];
	
	for(int j = 0; j < m; j++){
		
		cin >> arr[j];
	
	}
	
	
	for(int i = 0; i < m; i++) {
	
        for(int j = i + 1; j < m; j++) 
        if(arr[i] != arr[j]) {
		
            wibu = false;
            
        }
    }



int num = arr[0];
		for (int i = 1; i < m; i++ ){
			
			if (num > arr[i]){
				
				num = i;
				
			}
			
		}
		
		
	
keluar(wibu,num);
	
	
	
}
