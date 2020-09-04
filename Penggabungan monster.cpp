#include<bits/stdc++.h> 
#include<vector> 
#include<iostream>
using namespace std;
unsigned long long hasil(unsigned long long arr[], int x,unsigned long long y){
	if ( x == y){
		return 0;
	}
	//cout << x << " "<< arr[x] << endl;
	return arr[x] + hasil(arr, x+1,y);
	
}

int main(){
	
	int a,b;
	cin >> a >> b;
	 unsigned long long  arr[a];
	 for(int i = 0; i < a; i++){
	 	cin >> arr[i];
	 }
	 unsigned long long sum[a-b];
	 
	for (int i = 0; i <a-b; i++){
		sum[i] = hasil(arr, i, b + i+1);
		//cout << sum[i] << endl; 
	}
	
	sort(sum, sum+(a-b));

        
	cout << sum[a-b-1] << endl;
}
