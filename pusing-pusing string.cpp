#include <iostream>
#include <string>
#include <bits/stdc++.h> 
using namespace std;

string swap(int a, int b , string kata){
	
	int temp = kata[a-1];
	kata[a-1]=  kata[b-1];
	
	kata[b-1]= temp;
	return kata;
	
	
}

string sub(int c, int d,string kata){
reverse(kata.begin() + c-1, kata.begin() + d); 
return kata;
	
}





int main(){
int n,q,a,b; 
string kata;



cin >> n >> q >> kata;

int arr[q];
for (int i = 0; i <  q; i++){
	cin >> arr[i];
	
	if (arr[i] == 1){
		
		cin >> a >> b;
		
	kata =	swap(a,b,kata);
	
	}
	else {
		
		cin >> a >> b;
		
		kata = sub(a,b,kata);
	
	}
	
	
	
}

	cout << kata << endl;
	
	
	
	
}
