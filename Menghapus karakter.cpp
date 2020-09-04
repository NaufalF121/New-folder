#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int a,b;
	cin >> a >> b;
	char arr[a];
	
	for(int i = 0; i<a; i++ ){
		
		cin >> arr[i];
		
		}
		sort(arr, arr+a);
		cout << arr[b-1] << endl;

		
	}
	
