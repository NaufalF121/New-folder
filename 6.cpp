#include <iostream>
#include <string>
using namespace std;

int main(){
   string nohp;

  cin >> nohp ;

  if (nohp == "0"){
  	cout << "nol"<< endl;
  	
  }
  else if ( nohp <= "999999" && nohp > "0"){
  	
  	cout << "bilangan bulat positif" << endl;
  	
  } else if (nohp < "0") {
  	
  	cout << "bilangan bulat negatif" << endl;
  	
  }else  {
  	cout << "kata" << endl;
  }
  
  
  
  
}
