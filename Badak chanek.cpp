#include <iostream>
#include <algorithm>
using namespace std;

int main (){
	
	unsigned long long a,check,b;

cin >> a >> b;

	unsigned long long arr[a];
	
	
	for (int i = 0; i < a; i++){
		
		cin >> arr[i];
		
	}
	
	
	
	sort(arr,arr+a);
	
	for (int i =0; i< b; i++){
		cin >> check;
		
		cout << arr[check-1] << "\n";
		
	}
	
	
	
}
