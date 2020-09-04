#include <bits/stdc++.h> 
#include <unordered_map> 
using namespace std; 
  
void countFreq(vector<string> v, int n,string out) 
{ 
    unordered_map<string, int> mp; 
  
    // Traverse through array elements and 
    // count frequencies 
    for (int i = 0; i < n; i++) 
    
        mp[v[i]]++; 
  
    // Traverse through map and print frequencies 
    
        cout <<  mp[out]<< endl; 
} 
  
int main() 
{ 
    int a;
    cin >> a;
    
    unordered_map<string, int> mp; 
    for(int i = 0; i<a; i++){
    	string check;
    	cin >> check;
    	
    	if (check == "DAFTAR"){
    	
			string in;
			cin >> in; 
			
    		mp[in]++;
		}
		else
		{
			string out;
			cin >> out;
		cout << mp[out] <<"\n"; 
			
		}
    	
    	
	}
   
    return 0; 
} 
