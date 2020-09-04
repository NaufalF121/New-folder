#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int a;
	cin >> a;
	int arr[a];
	
	for(int i = 0; i<a; i++){
		
		cin >> arr[i];
		
	}
	int num =0;
	
	for(int i =0; i<a; i++){
		for (int j =i+1;j<a;j++){
			if (j>i){
				if(arr[i] > arr[j]){
					num++;
				}
			}
		}
		
		
	}
	
	cout << num << endl;
}
