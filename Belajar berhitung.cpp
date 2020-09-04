
#include<bits/stdc++.h> 
using namespace std; 


struct Interval 
{ 
	int s, e; 
	
}; 

unsigned long long perhitungan(unsigned long long a,unsigned long long b,unsigned long long n){
unsigned long long count = n*(a+b);
unsigned long long hasil = count/2;

return hasil;
}

bool mycomp(Interval a, Interval b) 
{ return a.s < b.s; } 

void mergeIntervals(Interval arr[], int n) 
{ 
	
	sort(arr, arr+n, mycomp); 

	int index = 0; 

	
	for (int i=1; i<n; i++) 
	{ 
		
		if (arr[index].e >= arr[i].s) 
		{ 
			 
			arr[index].e = max(arr[index].e, arr[i].e); 
			arr[index].s = min(arr[index].s, arr[i].s); 
		} 
		else { 
			index++; 
			arr[index] = arr[i]; 
		}	 
	} 

	unsigned long long jum = 0;
	for(int i = 0; i <= index; i++){
		jum = jum + perhitungan(arr[i].s, arr[i].e, arr[i].e - arr[i].s + 1);
	
	
}
	cout << jum << endl;
//	 for (int i = 0; i <= index; i++) 
//		cout << "[" << arr[i].s << ", " << arr[i].e << "] ";
//	 
} 

// Driver program zz
int main() 
{ 
    int n;
    cin >> n;
	Interval arr[n] ;
    for(int i = 0; i<n; i++){
    	
    	cin >> arr[i].s >> arr[i].e; 
    	
	}
	 
	
	mergeIntervals(arr, n); 
	return 0; 
} 

