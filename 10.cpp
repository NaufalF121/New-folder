#include  <iostream>

using namespace std;

int main () {
	
	
	int a, b , c, x, y, num ;
	num = 0;
	cin >> a >> b >> c >> x;
	y = (a*x+b)% c;
	while (x != y){
		y = (a*y+b)% c;
		num++;	
	}
	
cout << num +1 << endl;
	
}
