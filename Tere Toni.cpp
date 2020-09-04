#include <iostream>
using namespace std;
int main(){	
	int n;	
	cin >> n;
	for (int i = 0; i < n; i++){
		unsigned long long toni,tere;
		cin >> tere >> toni;
		double count = ((toni + tere)/2)+1  ;
	    int dec = (toni + tere)%2;
	if (dec == 1){
		count = count + 0.5;
	}
	cout << dec << endl << count<< endl;  ;
		if (tere >= count  ){
			cout << "Tere" << endl ;
		}
		else if(toni >= count  ){
			cout << "Toni" <<endl;
		}
		else {
			cout << "Voting Ulang" << endl;
		}
	}
}
