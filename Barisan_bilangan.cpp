#include <cstdio>


int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 
 
int main()
{
	long long N, A, B;
	scanf("%lld %lld %lld", &N, &A, &B);
 

 

 
	long long ans=(N/A)+(N/B)-(N/(A*B/gcd(A, B)));
 
	printf("%lld\n", ans);
}
