// C++ recursive function to 
// solve tower of hanoi puzzle 
#include <bits/stdc++.h> 
#include <iostream>
using namespace std; 

void towerOfHanoi(int n, char from_rod, 
					char to_rod, char aux_rod) 
{ 
	if (n == 1) 
	{ 
		cout << n << " " << from_rod << " " << to_rod<<endl; 
		return; 
	} 
	towerOfHanoi(n - 1, from_rod, aux_rod, to_rod); 
	cout << n << " " <<   from_rod << " " << to_rod << endl; 
	towerOfHanoi(n - 1, aux_rod, to_rod, from_rod); 
} 

// Driver code 
int main() 
{ 
	int n ;
	cin >> n; // Number of disks 
	towerOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of rods 
	return 0; 
} 

// This is code is contributed by rathbhupendra 

