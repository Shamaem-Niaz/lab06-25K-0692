#include <stdio.h>
int main(){
	int n,remainder,quotient,n2;
	
	printf("enter a number: ");
	scanf("%d",&n);
	
	remainder = n%10;
	
	while (n >= 10){
		n = n/10;
	}

    printf("%d" , n+remainder);
}
