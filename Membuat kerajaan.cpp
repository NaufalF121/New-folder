#include<bits/stdc++.h> 
using namespace std;





int main(){
	
	int x,y;
	cin >> x >> y;
	
	int arr[x][y];
	
	for(int i = 0; i<x; i++){
		for(int j = 0; j<y; j++){
			cin >> arr[i][j];
		    
			
		}
	}
	
	int num = 0;
	int max;
	max = num; 
	
	for(int i = 0; i<x; i++){
		for(int j = 0; j<y; j++ ){
			
			num = num + arr[i][j];
			
			if(num > max){
				max = num;
			}
			
		}
		
	}
	
	cout << max << endl;
	
	
}
