#include <iostream>
using namespace std;


int main (){
	
	
	int N,num;
	int math = 0;
	cin >> N;
	for (int i = 1; i <= N; i++){
		
		for(int j = 1; j <= N; j++){
			cin >> num;
			
			if (i == j){
				
			math = math + num;	
				
			}
			
			
		}
		
		
		
	}
	cout << math << endl;
	
	
	
	
}
