#include<bits/stdc++.h> 
#include <vector> 
using namespace std;
int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 
void hasil (int a, int b,int x,int y,int jumlah, int n,int num){
	vector<int> v;
	int count = 0;
	v.push_back(a);
	int clon = b;
	int clon2 = x;

		
		
		while(a != v[count] || v.empty()){
			clon = clon + y;
			if(clon == clon2){
				v.push_back(clon);
				
			}
			else if(clon > clon2){
				v.push_back(clon2);
				clon2 = clon2 + x;
			}else {
				v.push_back(clon);
			
			}
			
			count++;
		}
		
		cout << v[n - jumlah - 1 ] << endl;
	
}

int main(){
	
	int x,y,n;
	cin >> n >> x >> y;
    int num = gcd(x,y);
    if(x > y){
     int temp = n/2;
     int ang = x*temp;
     int ang2 = y*temp;
     int jumlah = temp + (ang/x);
     hasil(ang,ang2,x,y,jumlah,n,num);
     
    	
	}else{
		
		
		
	}

	
	
}
