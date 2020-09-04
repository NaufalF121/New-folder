#include <iostream>
using namespace std;
int main(){
	
	int a,b;
	cin >> a;
	cin >>b;
	string haram;
    string daf[a];
    
	for(int i =0; i<a; i++){
		cin >> daf[i];
		
	}
	for (int i = 0; i<b; i++){
		
		cin >> haram;
		int num = -1;
		for (int j = 0; j<a; j++){
			
			if(daf[j] == haram){
				
				num = j+1;
				break;
			}
			
		}
	 
		cout << num << "\n";
		
	}
	
	
	
	
}
