#include <iostream>

using namespace std;
class gfg 
{ 
public :  
  unsigned long long gcd(unsigned long long a, unsigned long long b){ 
    if (a == 0) 
        return b;  
    return gcd(b % a, a);  
 } 
  
   
  // Function to return LCM of two numbers  
  unsigned long long lcm(unsigned long long a, unsigned long long b)  
  {  
     return (a*b)/gcd(a, b);  
  }  
} ; 
 
int main (){
	gfg g;
	unsigned long long a, b ;
	cin >> a >> b;
cout << g.lcm(a, b) << endl;
	
}
