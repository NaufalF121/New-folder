#include <iostream>

using namespace std;

unsigned long long perhitungan(unsigned long long a,unsigned long long b,unsigned long long n){
unsigned long long count = n*(a+b);
unsigned long long hasil = count/2;

return hasil;
}






int main(){
	
unsigned long long n,m;
	unsigned long long queue = 1;
	cin >> n >> m;
	unsigned long long temp = n;
unsigned long long Un = n;
	long long num =0;
	unsigned long long modul = 1e9 + 7;
	
	for (unsigned long long i =0; i < n; i++){
	            
				unsigned long long count = perhitungan(temp,queue,Un);
			num = num + count;
				Un = Un - 1;	
		queue = queue + m +1;
		temp = temp + m;
	
		
	}
	
	cout << num% modul<< "\n";
	
}
