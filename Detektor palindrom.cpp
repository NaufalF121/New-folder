#include <iostream>
#include <string>
#include <bits/stdc++.h> 
using namespace std;

string detektor(string kata){
	


 reverse(kata.begin() , kata.end() ); 

return kata;

}




int main(){
	int n;
	cin >> n;
	string arr[n];
	
	for(int i =0; i < n; i++){
		
		cin >> arr[i];
		
		string temp = detektor(arr[i]);
	
	if(temp == arr[i]){
		
		cout << "palindrom" << endl;
	}
	else {
		
		cout << "bukan palindrom" << endl;
	}
		
	}
	
	
}
