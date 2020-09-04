#include <iostream>
using namespace std;
void hasil (int n){
	int num =0;
	for (int i =0; i<=n; i++){
		for (int j = 0; j<=n; j++){
			for (int p=0;p<=n; p++){
				if(p+j+i == n){
					
					num++;
				}
			}
		}
		
	}
	cout << num << "\n";
	
	
	
	
}

int main (){
	
	int N;
	cin >> N;
	hasil(N);
	
}
