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
			    statusA = 0 ;break;//�������� 
			}
			else statusA = 1; //��������������Ҫ�����Լ��ж� 
		}//�ж��Ƿ�Ϊ���� 
        original = x ;
		for ( a= 0; x >= 1; x = x/10)
		{
			a = a * 10 + x % 10 ; //ȡ���������� 
		}
		if (a == original)
		{
			statusB = 1 ; //��ȵĻ����ǻ����� 
		}else statusB = 0 ;
		
		if ((statusA == 1) && (statusB==1)){
			printf("Yes\n") ;
		}else printf("No\n");
	}
}

