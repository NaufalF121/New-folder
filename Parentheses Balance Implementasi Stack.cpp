#include <iostream>
#include <stack>

using namespace std;

bool exe(string expr) 
{ 
    stack<char> s; 
    char x; 
  
    // Traversing the Expression 
    for (int i = 0; i < expr.length(); i++) { 
        if (expr[i] == '(' || expr[i] == '[' ) { 
            // Push the element in the stack 
            s.push(expr[i]); 
            continue; 
        } 
  
        // IF current current character is not opening 
        // bracket, then it must be closing. So stack 
        // cannot be empty at this point. 
        if (s.empty()) 
            return false; 
  
        switch (expr[i]) { 
        case ')': 
  
            // Store the top element in a 
            x = s.top(); 
            s.pop(); 
            if (x == '{' || x == '[') 
                return false; 
            break; 
  
        
  
        case ']': 
  
            // Store the top element in c 
            x = s.top(); 
            s.pop(); 
            if (x == '(' || x == '{') 
                return false; 
            break; 
        } 
    } 
  
    // Check Empty Stack 
    return (s.empty()); 
} 
  
// Driver program to test above function
int main(){
	
	int a;
	cin >> a;
string par[a];
	
	
	for (int i = 0; i < a; i++){
		
		cin >> par[i];
		if(exe(par[i])){
			
			cout << "ya"<<"\n";
		}else{
			
			cout <<"tidak"<<"\n";
			
		}	
		
	}
	
	
	
	
	
	
}