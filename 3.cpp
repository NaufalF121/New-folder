#include <iostream>
#include <iomanip>

using namespace std;

int main () {
	
	double  a, b,  c, d, e, f;
	
	cin >> a >> b >> c >> d >> e >> f;
	
       //scanf (" %d %d %d %d %d %d"  , &a, &b , &c, &d, &e, &f);//
	
	double num = (a + b + c + d + e + f)/ 6;
	
	
	//printf ("%.9f",  num);//
	cout << setprecision(9)<< num << endl;
	
}
