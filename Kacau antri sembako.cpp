#include <iostream>
#include <vector>
#include <list> 
using namespace std;

int main(){
	
	int a,check;
	cin >> a;
	string masuk;
	vector<string> antri;
	
	for (int i = 0; i < a; i++){
		cin >> check;
		if (check == 2){
			cin >> masuk;
			 antri.push_back(masuk);
			
			
		}else if( check == 4){
			
			cout << antri.back()<< "\n";
			antri.erase(antri.end());
		}
		else if (check == 1){
			cin >> masuk;
			 antri.insert(antri.begin(),masuk);
		
	}
	else {
		
		cout << antri[0] << "\n";
			antri.erase(antri.begin());
	}
	

}
}

