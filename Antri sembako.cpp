#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	int a,check;
	cin >> a;
	string masuk;
	vector<string> antri;
	
	for (int i = 0; i < a; i++){
		cin >> check;
		if (check == 1){
			cin >> masuk;
			 antri.push_back(masuk);
			
			
		}else{
			
			cout << antri[0] << "\n";
			antri.erase(antri.begin());
		}
		
	}
	
}
