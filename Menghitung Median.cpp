#include <iostream>
#include<bits/stdc++.h> 
using namespace std;
//void func(priority_queue<double> s){
//	
//		while (s.empty() == false) 
//    { 
//        cout <<"max heap ==" << s.top() << " "; 
//        s.pop(); 
//    } 
//}
//void func2(priority_queue<double,vector<double>,greater<double> > g){
//		while (g.empty() == false) 
//    { 
//        cout <<"min heap ==" << g.top() << " "; 
//        g.pop(); 
//    } 
//}

int main(){
	
	int n;
	cin >> n;
	priority_queue<double> s; 
    priority_queue<double,vector<double>,greater<double> > g; 
	for (int i = 1; i<=n;i++){
		long double num;
		cin >> num;
		
		if(s.empty() || s.top() > num){
			
			s.push(num);
			
		}
		else{
			
			g.push(num);
			
		}if (s.size() > g.size()+1){
			
			g.push(s.top());
			s.pop();
			
		}
		 else if(s.size()+1 < g.size()){
			
			s.push(g.top());
			g.pop();
			
		}
		 
//	func2(g);
//	
//	func( s);
		if(i%2 == 0){
			
				
				cout <<(s.top() + g.top())/2<< endl;	
			}
			else if ( g.empty() == false){
				
				cout  <<g.top() << endl;
				
			}
			else {
				cout <<fixed << setprecision(1)<< s.top() << endl;
				
			}
			
			
		}
		return 0;
	}
	

