#include<bits/stdc++.h> 
using namespace std;
int main(){
	int a,b,c,d;
	cin >> a >>b >> c >> d;
	char grap[a][b];
	
	
	for(int i = 0; i<a; i++){
		for(int j = 0; j<b; j++){
			cin >> grap[i][j];
		}
	}
	
	int x,y;
	
	for(int i =0; i<d; i++ ){
	    int num = a*b;
		cin >> x >> y;
		
		for(int j =0; j<a; j++){
			for(int l = 0; l<b; l++){
				if(grap[j][l]== 'X'){
					int jum = abs(y-(l+1));
					int has = abs(x - (j+1));
					
					
					if (abs(has+jum) < num ){
						num = abs(has+jum);
					}
					
				}
			}
		}
		cout << num  << endl;
	}
}
