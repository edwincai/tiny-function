#include <stdio.h>
#include <math.h>
int main()
{
	int n , statusA, statusB ;
	long long a, x, b, original ;
	scanf ("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf ("%lld", &x) ;
		for (b = 2; b < x; b++ ){
			if (x % b == 0){
			    statusA = 0 ;break;//不是素数 
			}
			else statusA = 1; //可能是素数，需要继续自加判断 
		}//判断是否为素数 
        original = x ;
		for ( a= 0; x >= 1; x = x/10)
		{
			a = a * 10 + x % 10 ; //取倒过来的数 
		}
		if (a == original)
		{
			statusB = 1 ; //相等的话就是回文数 
		}else statusB = 0 ;
		
		if ((statusA == 1) && (statusB==1)){
			printf("Yes\n") ;
		}else printf("No\n");
	}
}

