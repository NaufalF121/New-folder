#include <iostream> 
#include <string>

using namespace std;

int main(){
	int q;
	cin >> q;
	int count=0;

			string a; 
		
			
			int x = 1;
			int b = 1000;	
	while (x<=b){
	int mid = (x+b)/2;
	
	cout << mid << "\n";
	fflush(stdout);
getline(cin,a);

		if(a == "BENAR"){
			
			break;
			
		} else if(a == "LEBIH BESAR"){
			
		x = mid + 1;
			
		} else if (a == "LEBIH KECIL"){
			
		b =	mid ;
			
		}
		count++;
		if (count == q){
			
			break;
		}
		
	
		
	}
	
	cin.get();
	return 0;
}

